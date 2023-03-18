n = int(input())

t = 0
for i in range(int(input())):
    a, b = map(int, input().split())
    t += a*b

if t == n:
    print("Yes")
else:
    print("No")