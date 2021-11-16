import argparse

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
    data=nums.split(' ')
    sorted(data)
    data.reverse()
    return data

def find_large_words(data):
    ans=[]
    for i in range(1,len(data)):
        if(len(data[i])==len(data[i-1])):
            ans.append(data[i-1])
        else:
            ans.append(data[i-1])
            break
    for i in ans: print(i)


parser = create_parse()
namespace = parser.parse_args()
workspace = create_file(namespace.filename)
find_large_words(workspace)