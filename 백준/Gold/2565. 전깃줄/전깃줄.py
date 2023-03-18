import sys

connect = int(input())

connect_list = []

for i in range(connect):
    connect_list.append(list(map(int, sys.stdin.readline().split())))

connect_list.sort()

x = [1]

for i in range(1, connect):
    temp = 0
    for j in range(i):
        if connect_list[i][1] > connect_list[j][1]:
            if temp <= x[j]:
                temp = x[j]
    temp += 1
    x.append(temp)

print(connect-max(x))