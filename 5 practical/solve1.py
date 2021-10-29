def nested_sum(t):
    summary=0
    for tlist in t:
        summary+=sum(tlist)
    return summary


t = [[0 for i in range(3)] for j in range(3)]
for i in range(3):
    row=input(' ').split()
    for j in range(3):
        t[i][j]=int(row[j])

print(nested_sum(t))

