alchoal = list(map(int, input().split()))

odd = []
for i in range(len(alchoal)):
    if alchoal[i] % 2 == 1:
        odd.append(alchoal[i])


temp = 1
if len(odd) > 0:
    for i in odd:
        temp *= i
else:
    for i in alchoal:
        temp *= i

print(temp)