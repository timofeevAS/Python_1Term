
array=[[[0 for i in range(3)] for j in range(3)] for k in range(3)]


for i in range(3):
    for j in range(3):
        x = input().split(' ')
        array[i][j][0],array[i][j][1],array[i][j][2] = x[0],x[1],x[2]

#проверим ряды и колонны
for i in range(3):
    for j in range(3):
        stroke=0
        coll=0
        #rstroke = 0
        rcoll = 0
        for k in range(3):
            if(array[i][j][k]=='0'):
                stroke+=1
            if(array[i][k][j]=='0'):
                coll+=1
            #if (array[j][k][i] == '0'):
            #    rstroke += 1
            if (array[k][j][i] == '0'):
                rcoll += 1

        if(stroke==3):
            print(f'{i+1} layer;{j+1} stroke')
        if(coll==3):
            print(f'{i + 1} layer;{j + 1} coll')
        #if (rstroke == 3):
        #    print(f'{i + 1} row;{j + 1} stroke')
        if (rcoll == 3):
            print(f'{i + 1} row;{j + 1} coll')
#в выводе N layer\row;K coll\stroke означает. Что в N-ом горизонтальном слое или вертикальном ряду 3х3 есть K-ая колонна или строка.