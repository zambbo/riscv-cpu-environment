FROM ubuntu:latest

RUN apt-get upgrade -y
RUN apt-get update -y
RUN apt-get install -y sudo vim wget curl python3 python3-pip git

RUN useradd -m host -s /bin/bash && echo "host:host" | chpasswd
RUN usermod -aG sudo host

ENV HOME=/home/host

WORKDIR ${HOME}

# Download RISC-V GNU Toolchain
RUN apt-get install -y autoconf automake autotools-dev curl python3 python3-pip libmpc-dev libmpfr-dev libgmp-dev gawk build-essential bison flex texinfo gperf libtool patchutils bc zlib1g-dev libexpat-dev ninja-build git cmake libglib2.0-dev libslirp-dev
RUN git clone https://github.com/riscv-collab/riscv-gnu-toolchain.git
ENV RISCV="/opt/riscv"
RUN cd riscv-gnu-toolchain && ./configure --prefix=$RISCV --enable-multilib && make -j `nproc`
ENV PATH="$PATH:/$RISCV/bin"

# Install spike
RUN apt-get install -y device-tree-compiler libboost-all-dev
RUN git clone https://github.com/riscv-software-src/riscv-isa-sim.git
RUN cd riscv-isa-sim && mkdir build && cd build && ../configure --prefix=$RISCV && make -j `nproc` && make install

# Install Verilator
RUN apt-get install -y help2man
RUN git clone https://github.com/verilator/verilator
RUN cd verilator && git checkout v5.006 && autoconf && ./configure && make -j `nproc` && make install
ENV VERILATOR_ROOT=${HOME}/verilator

# Install java and sbt
RUN apt-get update -y 
RUN apt-get install -y software-properties-common default-jdk default-jre
RUN add-apt-repository -y ppa:openjdk-r/ppa && \
    apt-get install -y openjdk-8-jre && update-alternatives --install /usr/bin/java java /usr/lib/jvm/java-8-openjdk-amd64/jre/bin/java 111111 && \
    apt-get install -y openjdk-8-jdk && update-alternatives --install /usr/bin/javac javac /usr/lib/jvm/java-8-openjdk-amd64/bin/javac 111111 && \
    echo "deb https://repo.scala-sbt.org/scalasbt/debian all main" | tee /etc/apt/sources.list.d/sbt.list && \
    echo "deb https://repo.scala-sbt.org/scalasbt/debian /" | tee /etc/apt/sources.list.d/sbt_old.list && \
    curl -sL "https://keyserver.ubuntu.com/pks/lookup?op=get&search=0x2EE0EA64E40A89B84B2DF73499E82A75642AC823" | gpg --no-default-keyring --keyring gnupg-ring:/etc/apt/trusted.gpg.d/scalasbt-release.gpg --import && \
    chmod 644 /etc/apt/trusted.gpg.d/scalasbt-release.gpg && \
    apt-get update && apt-get install sbt

# Install firtool
WORKDIR ${HOME}
RUN wget https://github.com/llvm/circt/releases/download/firtool-1.72.0/firrtl-bin-linux-x64.tar.gz
RUN tar -xvf ./firrtl-bin-linux-x64.tar.gz
RUN cp `pwd`/firtool-1.72.0/bin/firtool /usr/bin/firtool

# Install chipyard
WORKDIR ${HOME}
RUN apt-get install -y jq
RUN git clone https://github.com/ucb-bar/chipyard.git
WORKDIR ${HOME}/chipyard
RUN scripts/init-submodules-no-riscv-tools.sh
#RUN cd ./sims/verilator && make

# Install VexRiscv
WORKDIR ${HOME}
RUN git clone https://github.com/SpinalHDL/VexRiscv.git
WORKDIR ${HOME}/VexRiscv
RUN sbt "runMain vexriscv.demo.GenFull"
WORKDIR src/test/cpp/regression
RUN make run


# Install Picorv32
WORKDIR ${HOME}
RUN apt-get install -y iverilog #picorv32의 simulator인 icarus verilog install
RUN git clone https://github.com/YosysHQ/picorv32.git
WORKDIR ${HOME}/picorv32
RUN cd scripts/cxxdemo && sed -i 's/\/opt\/riscv32ic\/bin\/riscv32-unknown-elf-/\/opt\/riscv\/bin\/riscv64-unknown-elf-/' Makefile && sed -i '2s/$/ -mabi=ilp32 -march=rv32i/' Makefile && sed -i '3s/$/ -mabi=ilp32 -march=rv32i/' Makefile && sed -i 's/\$(CC)/\$(CXX)/' Makefile
# RUN cd scripts/cxxdemo && make test

# Install CVA6
#WORKDIR ${HOME}
#RUN git clone https://github.com/openhwgroup/cva6.git
#WORKDIR ${HOME}/cva6
#RUN git submodule update --init --recursive
#ENV DV_SIMULATORS=veri-testharness,spike
#RUN bash verif/regress/smoke-tests.sh
#RUN pip3 install -r verif/sim/dv/requirements.txt
#RUN source verif/sim/setup-env.sh

# Add Spike Test
COPY spike_test ${HOME}/spike_test

# Add Verilator Test
COPY verilator_test ${HOME}/verilator_test

# Add Cascade Base
WORKDIR ${HOME}
ENV CARGOEXEC=${HOME}/.cargo/bin/cargo 
RUN curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs | sh -s -- -y
RUN ${CARGOEXEC} install --force morty --root ${HOME} #install morty

RUN export PATH="$PATH:${HOME}/bin"
COPY cascade_base ${HOME}/cascade_base

# VexRiscv simulating
WORKDIR ${HOME}
RUN cp ${HOME}/VexRiscv -r ${HOME}/VexRiscv_test
COPY vexriscv_test ${HOME}/vexriscv_test
RUN mv ${HOME}/vexriscv_test/MyGen.scala ${HOME}/VexRiscv_test/src/main/scala/vexriscv/demo/MyGen.scala
#RUN mv ${HOME}/vexriscv_text/MyGen_FPU.scala ${HOME}/VexRiscv_test/src/main/scala/vexriscv/demo/MyGen_FPU.scala
RUN cd VexRiscv_test && sbt "runMain vexriscv.demo.MyGen" && mv VexRiscv.v ../vexriscv_test/VexRiscv.v
#RUN cd VexRiscv_test && sbt "runMain vexriscv.demo.MyGenFPU" && mv VexRiscv.v ../vexriscv_test/VexRiscv_fpu.v

