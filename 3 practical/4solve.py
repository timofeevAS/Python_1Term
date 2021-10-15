sbio,mupper,days=float(input('Стартовое кл-во организмов: ')),float(input('Среднесуточное увелечение в %: ')),int(input('Кл-во дней: '))
print('День  Популяция')

for i in range(days):
    print(f'{days}  {round(sbio,3)}')
    sbio*=1+mupper/100