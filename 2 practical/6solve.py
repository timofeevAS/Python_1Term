array=[]
n=int(input('введите кл-во элементов n (числа >=0): '))
maxi=0
for i in range(0,n):
    array.append(int(input()))
    maxi = max(array[i],maxi)

flags=[False]*(maxi+1)
ans=0

for x in array:
    if(flags[x-1] != True):
        flags[x-1] = True
        ans=ans+1

print(ans)
print(len(set(array)))
#print(array)