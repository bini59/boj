import math

a = int(input())
b = int(input())

a = math.ceil(math.sqrt(a))
b = math.floor(math.sqrt(b))

res = 0
for i in range(a, b+1):
    res += i**2

if res == 0:
    print(-1)
else:
    print(res)
    print(a**2)
