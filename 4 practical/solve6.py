def mostChar(word):
    count = 0
    ans=''
    for i in word:
        if(count < word.count(i)):
            count=word.count(i)
            ans=i
    return ans

word = input('Word is? ')
print(mostChar(word))