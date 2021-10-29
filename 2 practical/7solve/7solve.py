def f(x):
    return(x**2)

def ternarySearch(left,right, eps):
    while(right-left<eps):
        a = (2*left+right)/3
        b = (2*right+left)/3
        if f(a) < f (b):
            right=b
        else:
            left=a
    return (right + left) / 2.0

left=float(input('Введите левую границу'))
right=float(input('Введите правую границу'))
eps=float(input('Введите точность до которой искать экстремум'))

print(ternarySearch(left,right,eps))