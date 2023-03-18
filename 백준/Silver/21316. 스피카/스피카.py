MAP = {

}

for i in range(1, 13):
    MAP[i] = []

for i in range(12):
    a, b = map(int, input().split())
    MAP[a].append(b)
    MAP[b].append(a)

temp = []
for i in range(1, 13):
    if len(MAP[i]) == 3:
        temp.append(i)
temp2 = 0
for i in range(len(temp)):
    for j in range(3):
        temp2 += len(MAP[MAP[temp[i]][j]])
    if temp2 == 6:
        print(temp[i])
        break
    temp2 = 0

