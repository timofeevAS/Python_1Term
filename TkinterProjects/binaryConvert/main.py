from tkinter import *
window = Tk()
titleWindow = Label(window,text='Введите число в десятичной системе счисления',font=("Courier New", 20))
titleWindow.grid(column=0,row=0)

def summaryDefinition():
    binaryDigit=str(bin(int(value.get())))
    answerDefinition.configure(text=f'{binaryDigit[2:]}')

window.title("Перевод числа в двоичную систему счисления")

answerDefinition = Label(window,text="",font=("Courier New", 20))
answerDefinition.grid(column=0,row=1)

doButton=Button(window,text='Выполнить перевод',command=summaryDefinition)
doButton.grid(column=0,row=2)

#задаем трехмерную матрицу
value=Entry(window,width=10)
value.grid(column=0,row=3)

#window.geometry('260x400')
window.mainloop()