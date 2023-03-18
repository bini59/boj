import sys

x = []
y = []
for i in range(3):
    point = list(map(int, sys.stdin.readline().split()))
    if point[0] in x:
        x.remove(point[0])
    else:
        x.append(point[0])
    if point[1] in y:
        y.remove(point[1])
    else:
        y.append(point[1])

print(f'{x[0]} {y[0]}')
