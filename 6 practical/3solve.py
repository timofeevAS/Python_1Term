def power(a,b):
    if(b==0):
        return 1
    if(b % 2 != 0):
        return power(a,b-1)*a
    else:
        k=power(a,b//2)
        return k*k

a,b=int(input()),int(input())
print(power(a,b))