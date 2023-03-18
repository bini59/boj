a = int(input())
b = int(input())

so = list(range(2, 10001))
x = list(range(2, 101))

for i in x:
    for j in range(2, 10000//i + 1):
        if i*j in so:
            so.remove(i*j)
        if (i*j) in x:
            x.remove(i*j)

temp = []
for l in so:
    if l >= a and l <= b:
        temp.append(l)


if len(temp) == 0:
    print(-1)
else:
    print(sum(temp))
    print(temp[0])
