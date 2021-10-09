n=int(input())#в задаче N=3
array=[[[0 for i in range(n)] for j in range(n)] for k in range(n)]

#задача на трехмерный куб где мы ищем сквозные дыры в нем
for i in range(n):
    for j in range(n):
        x = input().split(' ')
        for k in range(n):
            array[i][j][k]=x[k]

#проверим ряды и колонны
for i in range(n):
    for j in range(n):
        stroke=0
        coll=0
        #rstroke = 0
        rcoll = 0
        for k in range(n):
            if(array[i][j][k]=='0'):
                stroke+=1
            if(array[i][k][j]=='0'):
                coll+=1
            #if (array[j][k][i] == '0'):
            #    rstroke += 1
            if (array[k][j][i] == '0'):
                rcoll += 1

        if(stroke==n):
            print(f'{i+1} layer;{j+1} stroke')
        if(coll==n):
            print(f'{i + 1} layer;{j + 1} coll')
        if (rcoll == n):
            print(f'{i + 1} row;{j + 1} coll')


#в выводе N layer\row;K coll\stroke означает. Что в N-ом горизонтальном слое или вертикальном ряду 3х3 есть K-ая колонна или строка.