def countLetters(paramater,word):
    v='aeiouyаоэеиыуёюя'
    c='bcdfghjklmnpqrstvwxyzбвгджзйклмнпрстфхцчшщ'
    vcount=ccount=0
    for letter in word:
        if(letter.isalpha()):
            letter=letter.casefold()
            if(letter in v):
                vcount+=1
            else:
                ccount+=1

    if(paramater==0):
        return f'Кл-во гласных: {vcount}'
    return f'Кл-во согласных: {ccount}'

word=input('Введите слово и мы посчитаем количество согласных и гласных в нем: ')
param=input('Введите символ Г или С, чтобы найти соотвествующие буквы: ')
if(param=='Г'):
    param=0
else:
    param=1
print(countLetters(param,word))
