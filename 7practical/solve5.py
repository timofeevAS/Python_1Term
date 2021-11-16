import argparse
import random

def create_parse():
    parser = argparse.ArgumentParser()
    parser.add_argument('-f','--filename', type=str)
    return parser

def create_file(filename):
    try:
        with open(filename, 'r') as f:
            nums = f.read()
    except IOError:
        print('File with current name did not find. Try another name')
        quit()
    nums=nums.replace(',','')
    data=nums.split(' ')
    return data

def generate_password(data):
    index2=random.randint(0,len(data)-1)
    index1=random.randint(0,len(data)-1)
    word1, word2 = data[index1].title(),data[index2].title()
    password=word1+word2
    return password



parser = create_parse()
namespace = parser.parse_args()
workspace = create_file(namespace.filename)
print(generate_password(workspace))