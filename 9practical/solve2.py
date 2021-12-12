fib_memory={
    1:1,
    2:1
}

def fib(n):
    result=fib_memory.get(n)
    if(result is None):
        result=fib(n-1)+fib(n-2)
        fib_memory[n]=result
    return result

print(fib(200))
