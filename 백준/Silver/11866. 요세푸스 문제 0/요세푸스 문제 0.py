n, k = map(int, input().split())

li = list(range(1, n+1))

answer = []

while True:
    x = k%len(li)-1
    answer.append(li.pop(x))
    if len(li) == 0:
        break
    for i in range(x):
        li.append(li.pop(0))

    



print('<', end='')
for i in range(len(answer)-1):
    print(answer[i], end = ', ')
print(answer[-1],end='>')
