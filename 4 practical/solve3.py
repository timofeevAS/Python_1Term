def writeInitials(a):
    answer=''
    for i in a:
        if(i.isupper()):
            answer+=i+'.'
    return answer

print(writeInitials(input()))