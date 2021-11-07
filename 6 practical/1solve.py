def print_till_zero(n):
    if n == 0:
        return
    print(n)
    return print_till_zero(n-1)


print(print_till_zero(10))

