def hanoiTowers(amount, start, end, temp):
        if(amount==1):
            print(f'Disk 1 move from {start} to {end}') #когда остался непосредственно 1 диск мы сдвигаем его с start в конечный стержень end
            return
        hanoiTowers(amount-1,start,temp,end)#перемещаем башню из n-1 дисков на temp. чтобы перекинуть n на end
        print(f'Disk {amount} move from {start} to {end}') #теперь постепенно выходя из рекурсии мы будем передвигать уже стержень ni+1 (по глубине) на вспомогательный, используя уже целевой как temp
        hanoiTowers(amount-1,temp,end,start)#вновь вызываем функцию сдвигая все n-1 дикски с temp в end использую start как temp

hanoiTowers(3,'1','3','2') # рекурсивная функция, которая принимает 4 аргумента (кл-во дисков, база, куда нужно, вспомогательный стержень)