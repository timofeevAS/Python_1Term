def isLoShu(array):
    for i in range(3):
        row=0
        column=0
        for j in range(3):
            row+=array[i][j]
            column+=array[j][i]
        if(row != 15 or column != 15):
            return False
    if(array[0][0]+array[1][1]+array[2][2] != 15 or array[2][0]+array[1][1]+array[0][2]!=15):
        return False
    return True



x = [[0 for i in range(3)] for j in range(3)]
for i in range(3):
    row=input(' ').split()
    for j in range(3):
        x[i][j]=int(row[j])

if(isLoShu(x)):
    print('Квадрат ЛоШу')
else:
    print('Не квадрат ЛоШу')
