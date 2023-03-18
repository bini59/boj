h, m = map(int, input().split())
M = int(input())
h += M//60
m += M%60
if m >= 60:
    h += 1
    m -= 60
if h >= 24:
    h -= 24
print(f"{h} {m}")