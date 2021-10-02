word=input('Введите любое целое число: ')
ans=0
if((word[0]=='0' and len(word) != 1) or(word[0:2])=="-0"):
    print('Введите число без ведущих нулей')
    exit()
for x in word:
    if(x=='-'): # исключаем минус в целых числах
        continue
    ans=ans+int(x)
print(ans)  