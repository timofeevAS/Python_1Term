import argparse
import random

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

def find_comment(data):
    comma=func=0
    ans=[]
    for line in range(0,len(data)):
        if('#' in data[line]):
            comma+=1
            continue
        if('def' in data[line] and comma!=1):
            for sym in range(3, len(data[line])):
                if(data[line][sym]=='('):
                    ans.append(data[line][4:sym])
                    break
        comma=0

    return ans
parser = create_parse()
namespace = parser.parse_args()
workspace = create_file(namespace.filename)
for defs in find_comment(workspace):    print(defs)