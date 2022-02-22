from bs4 import BeautifulSoup
import requests
import re

main_schedule=[]


def append_new_add(lesson,time,day,hall): # добавляем в словарь новую запись
    weekdays = ["ПН","ВТ","СР","ЧТ","ПТ","СБ","ВС"]
    time_schedule = f"{time+5}:00"
    day_schedule = weekdays[day]

    lesson = re.sub("^\s+|\n|\r|\s+$","",lesson)#убираем все переносы строк

    schedule_add={
        "урок":lesson,
        "время":time_schedule,
        "день": day_schedule,
        "зал": hall
    }

    return schedule_add

url = "https://salsaplus.ru/raspisanie/" #ссылка на сайт
response = requests.get(url) #получаем страничку
page = BeautifulSoup(response.text, "html.parser")
tables = page.find_all("div", class_="days") #получаем все 4 таблицы

hall = 0 #считаем залы
for table in tables:
    week = []#недельный массив в который добавляем занятия
    columns = table.find_all("div", class_="day")#разбиваем по колоннам
    day = 0 #день для подсчета дня недели
    hall += 1#считаем номер зала
    for column in columns:
        rows=column.find_all("div")#строчку смотрим
        for row in rows:
            lessons = row.find("div",class_="mid")#на данном этапе исключаем ошибку, когда у нас есть ячейка с атрибутом который немного "поломан в коде сайта"
            try:
                time_hour = row.attrs["data-hover-hour"]
            except:
                pass
            if(lessons != None):
                addition = append_new_add(lessons.text,int(time_hour),day,hall)
                week.append(addition)
        day = day + 1
    main_schedule.append(week)

print(main_schedule)
