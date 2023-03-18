a = input()
t = list(map(int, input().split()))

def min(n):
    return 10*(n//30+1)

def young(n):
    return 15*(n//60+1)
M = 0
Y = 0
for i in t:
    M += min(i)
    Y += young(i)

if M > Y:
    print('M', Y)
elif M < Y:
    print('Y', M)
elif M == Y:
    print('Y M', M)