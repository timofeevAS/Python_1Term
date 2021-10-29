def chop(t):
    t.pop(len(t)-1)
    t.pop(0)

t = input(' ').split()
print(t)
chop(t)
print(t)

