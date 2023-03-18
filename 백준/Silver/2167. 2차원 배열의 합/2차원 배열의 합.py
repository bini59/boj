import sys
m, n = map(int, input().split())
matrix = []

for i in range(m):
    matrix.append(list(map(int, sys.stdin.readline().split())))

for i in range(int(input())):
    goend = list(map(int, sys.stdin.readline().split()))
    result = 0
    for j in range(goend[0]-1, goend[2]):
        for k in range(goend[1]-1, goend[3]):
            result += matrix[j][k]
    print(result)