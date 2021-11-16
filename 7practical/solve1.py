import argparse

def create_parse():
    parser = argparse.ArgumentParser()
    parser.add_argument('-f','--filename', type=str)
    return parser

def create_file(filename):
    try:
        with open(filename, 'r') as f:
            nums = f.read().splitlines()
    except IOError:
        print('File with current name did not find. Try another name')
        quit()
    return nums

def output_lines(file,count):
    for i in range(count):
        print(file[i])

parser = create_parse()
namespace = parser.parse_args()
workspace = create_file(namespace.filename)
output_lines(workspace,10)