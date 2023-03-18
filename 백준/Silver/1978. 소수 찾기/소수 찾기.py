input()
num = list(map(int, input().split()))

so = list(range(2, 1001))
x = list(range(2, 35))

for i in x:
    for j in range(2, 1000//i + 1):
        if i*j in so:
            so.remove(i*j)
        if (i*j) in x:
            x.remove(i*j)

result = 0
for k in num:
    if k in so:
        result += 1

print(result)