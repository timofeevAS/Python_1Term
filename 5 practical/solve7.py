def is_duplicate(s):
    if(len(s)!=len(set(s))):
        return False
    return True

s = input(' ').split()
print(is_duplicate(s))