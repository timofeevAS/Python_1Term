x=input().split(' ')
sum=0
for i in x:
    if(i<'0'):
        break
    sum+=int(i)
print(sum)