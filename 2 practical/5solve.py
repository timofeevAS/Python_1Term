import random
print('Правила игры просты: компьютер загадает вам число от 1 до N. У вас есть K. Укажите все плавующие параметры ниже')
k, n =int(input('Введите k: ')), int(input('Введите n: '))

ans = random.randint(1,n)
flag=False
while(k>0):
    if(int(input((f'Попытка {k}:' + '\n' + f'Введите целое число от 1 до N: '))) == ans):
        flag = True
        k = k -1
    else:
        k = k - 1

if(flag==True):
    print(f"Вы отгадали число {ans}.")
else:
    print(f"Вы не отгадали число {ans}")

