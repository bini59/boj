n, m = map(int, input().split())
a = list(map(int, input().split()))

M = 0
for i in range(m):
    M += a[i]

x = M
for i in range(m, n):
    x = x-a[i-m]+a[i]
    if x > M:
        M = x
    # print(x)

print(M)