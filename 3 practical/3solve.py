def countFact(n):
    x=1
    for i in range(1,n+1):
       x*=i
    return x

print(countFact(int(input('Введите число N > 0: '))))