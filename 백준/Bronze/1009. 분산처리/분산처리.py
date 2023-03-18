a = int(input())
for i in range(a):
    t = input().split()
    if int(t[1]) % 4 == 0:
        y = 4
    else:
        y = int(t[1])%4
    x = (int(t[0][-1]) ** y) %  10
    if x == 0:
        print(10)
    else:
        print(x)