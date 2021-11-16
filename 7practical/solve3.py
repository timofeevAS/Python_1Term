import argparse

def create_parse():
    parser = argparse.ArgumentParser()
    parser.add_argument('-f','--filename', type=str)
    parser.add_argument('-n','--newfile', type=str)
    return parser

def create_file(filename):
    try:
        with open(filename, 'r') as f:
            nums = f.read().splitlines()
    except IOError:
            print(f'File with name {filename} did not find. Try another name-list')
            quit()
    return nums

def parse_files(data):
    new_data=[]
    for i in range(len(data)):
        new_data.append(f'{i+1}: {data[i]}')
    return new_data

def create_new_file(data,filename):
    file= open(f'{filename}.txt','w+')
    s=""
    for i in data:  s+=f'{i}'+'\n'
    file.write(s)
    file.close()

parser = create_parse()
namespace = parser.parse_args()
workspace = create_file(namespace.filename)
new_workspace=parse_files(workspace)
create_new_file(new_workspace,namespace.newfile)