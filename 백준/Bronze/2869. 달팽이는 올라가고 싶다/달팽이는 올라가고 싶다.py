import math

t = list(map(int, input().split()))

t[2] -= t[0]

print(math.ceil(t[2]/(t[0]-t[1]))+1)