def is_palindrome(s):
    if len(s) == 0:
        return True
    if(s[0]==s[-1]):
        return is_palindrome(s[1:-1])
    return False

def space_remove(s : str):
    if(s.find(' ')<0):
        return s
    return space_remove(s[:s.find(' ')]+s[s.find(' ')+1:])

print(is_palindrome(space_remove(input().lower())))