import sys
import os
import struct

def bin2hex(bin_file, hex_file):
    with open(bin_file, 'rb') as f:
        bin_data = f.read()

    hex_data = ''
    for i in range(0, len(bin_data), 4):
        word = bin_data[i:i+4]
        hex_word = struct.unpack('<I', word)[0]
        hex_data += f'{hex_word:08x}\n'

    with open(hex_file, 'w') as f:
        f.write(hex_data)

if __name__ == '__main__':
    if len(sys.argv) != 3:
        print(f'Usage: {sys.argv[0]} <input_bin_file> <output_hex_file>')
        sys.exit(1)

    input_file = sys.argv[1]
    output_file = sys.argv[2]

    if not os.path.isfile(input_file):
        print(f'Error: Input file "{input_file}" does not exist.')
        sys.exit(1)

    bin2hex(input_file, output_file)
    print(f'Converted "{input_file}" to "{output_file}".')

