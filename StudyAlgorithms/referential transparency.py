#It is the easiest example wtih referential transparency code. With summary of array.
def summary(array, i=0):
    if(i==len(array)):
        return 0
    else:
        return array[i]+summary(array,i+1)
        return array[i]+summary(array,i+1)

array=[1,2,3,4,10,80,900]
print(summary(array))
