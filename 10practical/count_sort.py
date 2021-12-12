array1=[2,4,7,1,2,8,3,9,0,5]
print(sorted(array1))
def count_sort(array1):
    m=min(array1)
    help_array=[0 for i in range(min(array1),max(array1)+1)]
    for item in array1:
        help_array[item-m]+=1
    array1.clear()
    for item in help_array:
        [array1.append(m) for n in range(item)]
        m+=1
    return array1

print(count_sort(array1))