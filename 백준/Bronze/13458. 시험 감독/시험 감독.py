import math
a = int(input())
t = list(map(int, input().split()))
c, d = map(int, input().split())

res = 0
for i in range(len(t)):
    tmp = 1
    t[i] -= c
    if t[i] < 0:
        t[i] = 0
    tmp += math.ceil(t[i]/d)

    res += tmp

print(res)
