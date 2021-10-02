time = str(input('Введите время в формате HH:MM:SS : ')) # 01 34 67
total_time=(int(time[0:2])*3600)+(int(time[3:5])*60)+(int(time[6:800])) # берем подстроки по строке соответсвенно часы,минуты,секунды
print(total_time)
