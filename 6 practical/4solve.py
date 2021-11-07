def max_in(array):
    if(len(array)==1):
        return array[0]
    if(array[0]>=array[-1]):
        return max_in(array[:-2])
    if(array[-1]>=array[0]):
        return max_in(array[1:])


array=(input().split(' '))
for x in range(len(array)):
    array[x]=int(array[x])

print(array.index(max_in(array)))
