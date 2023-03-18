a, b, c = map(int, input().split())
t = int(input())

b += (c+t)//60
c = (c+t)%60
a += b //60
b %= 60
a %= 24

print(f"{a} {b} {c}")