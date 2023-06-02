a = []
for i in range(5):
    a.append(sum(map(int, input().split())))
M = 0
k = 0
for i in range(5):
    if (a[i] > M):
        M = a[i]
        k = i
print(f"{k+1} {M}")
