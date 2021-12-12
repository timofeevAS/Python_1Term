array=[1,23,42,323,54,3,52346765,363,4645,867,53,6,23,435,7,56452,4,854,35,78,656,478,978654,342,1,687,987,4635,674,586,54635124,15,2567589,873,523412,67,6878,73152,435,768,59,65,7346]
array=sorted(array)
def interpol_search(a,key):
    left=0
    right=len(a)-1
    res=True
    while(a[left] < key and key < a[right]):
        mid=midlle = left + int(((right - left)/(a[right]-a[left]))*(key - a[left]))
        if(a[mid]<key):
            left=mid+1
        elif(a[mid]>key):
            right=mid-1
        else:
            return mid

    if(a[left]==key):
        return left
    elif(a[right]==key):
        return right
    else:
        return -1


ans=interpol_search(array,7)
print(ans)