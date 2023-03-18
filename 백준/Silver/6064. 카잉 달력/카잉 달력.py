import sys

def gcd(x, y):
    if y > x:
        x, y = y, x
    if x % y == 0:
        return (y)
    else:
        return gcd(y, x%y)


def Lcm(a, b):
    return a*b // gcd(a, b)

N = int(input())

for i in range(N):
    temp = -1
    x, y, a, b = map(int, sys.stdin.readline().split())
    lcm = Lcm(x, y)
    for j in range(0, lcm//y):
        if (b - a + y*j) % x == 0:
            temp = (b-a+y*j)//x
    if temp >= 0:
        print(temp*x+a)
    else:
        print(-1)