def countOfElements(array,n):
    answer=0
    for i in array:
        if int(i) > n:
            answer+=1
    return answer
x,n=input().split(' '),int(input())
print(countOfElements(x,n))