import math

a = input()
res = 0
for i in range(5):
    res += int(pow(int(a[i]), 5))
print(res)