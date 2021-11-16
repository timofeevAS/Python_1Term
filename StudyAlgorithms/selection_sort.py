#slow algorithm to sort. O(n*n).
def find_smallest(array):
    smallest=array[0]
    smallest_index=0
    for i in range(len(array)):
        if(array[i]<smallest):
            smallest=array[i]
            smallest_index=i
    return smallest_index

def selection_sort(array):
    sorted_array=[]
    for i in range(len(array)):
        smallest=find_smallest(array)
        sorted_array.append(array.pop(smallest)) # here we used a "array.pop". You can read how this function works, but this is make code more beuty
    return sorted_array

array=[13,34,22,1,5,9,-1,32,44,5,6,7,3]
print(selection_sort(array))