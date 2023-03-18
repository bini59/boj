import sys
x = []
y = [0] * 14
for i in range(14):
    x.append(y[:])


x.insert(0, list(range(1, 15)))

for i in range(1, 15):
    for j in range(14):
        x[i][j] = sum(x[i-1][0:j+1])


for i in range(int(input())):
    xy = []
    for j in range(2):
        xy.append(int(sys.stdin.readline()))
    print(x[xy[0]][xy[1]-1])
