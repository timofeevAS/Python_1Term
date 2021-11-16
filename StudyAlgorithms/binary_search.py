#simplify binary search, which return array's index of our digit ||| O(logN)
import random
def binary_search(array,item):
    low=0
    high=len(array)

    while(low<=high):
        mid=(low+high)//2
        guess=array[mid]

        if(guess==item):
            return mid
        if(guess<item):
            low=mid+1
        else:
            high=mid-1
    return None

#my_array=[random.randint(0,100000) for i in range(100000)]
my_array=[1,2,3,4,10,12,55,66,78,99,1021,5243,6245654,23465,3242342,23,4234,4234231,4124,321343,56546,34634,345,432]
sorted(my_array) # list must be sort cause binary_search can't work on unsorted data
print(binary_search(my_array,55))
