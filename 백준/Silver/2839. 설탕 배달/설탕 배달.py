N=int(input())
a=0
b=0
while True:
    while True:
        if 5 * a + 3 * b == N:
            break
        elif 5 * a + 3 * b > N:
            a -= 1
            break
        a += 1
    if a < 0:
        a = 0
    if 5*a + 3*b > N:
        b -= 1
        print('-1')
        break
    elif 5*a + 3*b == N:
        print(a+b)
        break
    b += 1
