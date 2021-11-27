import random
import time
def linear_search(array,item):
    for i in range(0, len(array)):
        if(array[i]==item):
            return i
    return -1

def binary_search_cycle(array,item):
    left=0
    right=len(array)
    while(left<=right):
        mid=(left+right)//2
        guess=array[mid]
        if(guess==item):
            return mid
        if(guess<item):
            left=mid+1
        else:
            right=mid-1
    return -1

def binary_search_recursion(array,item,left,right):
    mid=(right+left)//2
    if(array[mid]==item):
        return mid

    if(array[mid]<item):
        return binary_search_recursion(array,item,mid-1,right)
    else:
        return binary_search_recursion(array,item,left,mid+1)

def nth_root_binary_search(digit,n):
    if(digit >= 0 and digit < 1):
        left=digit
        right=1
    else:
        left=1
        right=digit
    epsilon=0.00001 # точность наших вычислений
    mid=(left+right)/2
    while abs(mid**n - digit) >= epsilon:
        if mid**n - digit >= epsilon:
            right=mid
        else:
            left=mid
        mid=(left+right)/2
    return mid

#my_array=[random.randint(0,1000) for i in range(100000)]
#my_array=[0,1,2,3,543,432,123,64,12,5,7,875432,6542,2335,63,441,43,2,8,321,458,87,214,8,54,213436,368,325,3458,65454,167,8577,65,54,10,312,5646754,5323]
my_array=list(range(1,10**6))
my_array=sorted(list(set(my_array)))
print(linear_search(my_array,3412))
print(binary_search_cycle(my_array,3412))
#print(binary_search_recursion(my_array,10,0,len(my_array)))
print("%.5f" % nth_root_binary_search(100,100))
