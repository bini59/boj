def change(x, n):
    i = 1
    while True:
        if n*i > len(x):
            break
        if x[n*i-1] == 0:
            x[n*i-1] = 1
        elif x[n*i-1] == 1:
            x[n*i-1] = 0
        i += 1

X = int(input())
total = []
for i in range(X):
    test = int(input())
    room = []
    for j in range(test):
        if j % 2 == 0:
            room.append(0)
        else:
            room.append(1)
    for k in range(3, test+1):
        change(room, k)
    total.append(room.count(0))

for l in range(len(total)):
    print(total[l])