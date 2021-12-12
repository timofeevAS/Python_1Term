array=[2,7,4,3,1,5,5]

def bubble_sort(array):
    for i in range(len(array)):
        for j in range(len(array)-i-1):
            if(array[j]>array[j+1]):
                array[j],array[j+1]=array[j+1],array[j]
    return array


print(bubble_sort(array))
#O(n^2)