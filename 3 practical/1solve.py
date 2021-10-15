#s=t*v
t,v =int(input('Введите время в часах в пути: ')), int(input('Введите скорость поезда: '))
print(f'Час    Пройденное расстояние')
for i in range(1,t+1):
    print(f'{i}    {(i)*v}')
