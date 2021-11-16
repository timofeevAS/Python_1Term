import argparse

def create_parse():
    parser = argparse.ArgumentParser()
    parser.add_argument('-f','--filename', type=str, nargs='+')
    return parser

def files_concatenation(filenames):
    data=[]
    for filename in filenames:
        try:
            with open(filename, 'r') as f:
                nums = f.read()
        except IOError:
            print(f'File with name {filename} did not find. Try another name-list')
            return
        data.append(nums)
    return data

def parse_files(data):
    for i in data:  print(i)

parser = create_parse()
namespace = parser.parse_args()
workspace = files_concatenation(namespace.filename)
parse_files(workspace)