fib_memory={
    1:1,
    2:1
}

def fib(n):
    result=0
    i=3
    while i <=n:
        fib_memory[i]=fib_memory[i-1]+fib_memory[i-2]
        i+=1
    return fib_memory[n]


print(fib(13))