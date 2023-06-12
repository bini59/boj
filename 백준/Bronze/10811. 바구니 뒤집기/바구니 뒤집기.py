m, n = map(int, input().split())

li = [i for i in range(m+2)]

for i in range(n):
    a, b = map(int, input().split())
    li = li[:a] + li[b:a-1:-1] + li[b+1:]
for i in range(m):
    print(li[i+1], end=" ")
