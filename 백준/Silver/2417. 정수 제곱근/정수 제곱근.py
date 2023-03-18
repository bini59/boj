import math


n = int(input())
a = 0
b = 2**32

if n == 0:
    print(0)
else:
    x = 0
    while True:
        x = (a+b)//2 + (a+b)%2
        if x**2 == n:
            break 
        elif x**2 > n:
            b = x
        else:
            a = x
        if abs(a - b) <= 1:
            break

    if x**2 >= n:
        print(x)
    else:
        print(x+1)

