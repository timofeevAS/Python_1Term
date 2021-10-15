k=int(input('Введите K: '))

for i in range(k):
    print('#',end='')
    for j in range(i):
        print(' ',end='')
    print('#')