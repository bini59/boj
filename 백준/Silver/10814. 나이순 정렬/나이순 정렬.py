import sys

result = []

for i in range(int(input())):
    age, name = sys.stdin.readline().split()
    result.append([int(age), i, name])

result.sort(key = lambda x : (x[0], x[1]))


for j in result:
    print(f'{j[0]} {j[2]}')