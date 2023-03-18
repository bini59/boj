number = list(range(1, 10001))
self_number = number[:]

for i in number:
    num = i
    x = str(i)
    for j in x:
        num += int(j)
    try:
        self_number.remove(num)
    except:
        pass
for k in self_number:
    print(k)