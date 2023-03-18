import sys

t = []

for i in range(10000):
    t.append(0)

for i in range(int(input())):

    t[int(sys.stdin.readline())-1] += 1

x = 1
for i in t:

    for j in range(i):
        print(x)

    x += 1