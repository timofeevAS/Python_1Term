def cumsum(t):
    ans=[]
    for i in range(len(t)):
        curSum=0
        for j in range(i+1):
            curSum+=int(t[j])
        ans.append(curSum)
    return ans

t = input(' ').split()

print(cumsum(t))

