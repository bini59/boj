import sys

t = []
for i in range(int(input())):
    t.append(list(map(int, sys.stdin.readline().split())))

t.sort(key = lambda x : (x[1], x[0]))

for j in t:
	print(j[0], end = ' ')
	print(j[1])