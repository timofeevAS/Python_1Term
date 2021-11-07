def fibbonachi(n):
    if n in (1,2):
        return 1
    return fibbonachi(n-1)+fibbonachi(n-2)

print(fibbonachi(int(input())))