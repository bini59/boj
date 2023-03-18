n = int(input())
f = int(input())

n = n-n%100
if n == 0:
    n = 1
for i in range(100):
    if n%f == 0:
        break
    else:
        n += 1

if n < 10:
    print("0"+str(n))
else:
    print(str(n)[-2:])