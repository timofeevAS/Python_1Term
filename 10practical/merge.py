array1,array2=[1,2,7,10],[3,4,5,6,7,8,9,10,11,12,13,14]

def merge(a,b):
    index_a,index_b=0,0
    result=[]
    while(index_a!= len(a) and index_b!=len(b)):
        if(a[index_a] < b[index_b]):
            result.append(a[index_a])
            index_a+=1
        else:
            result.append(b[index_b])
            index_b+=1

    if(index_a!=len(a)):
        result+=a[index_a:]
    else:
        result+=b[index_b:]

    return result


print(merge(array1,array2))
