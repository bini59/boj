N = input()

temp = True
if int(N)-len(N)*9 < 0:
    x = 0
else:
    x = int(N)-len(N)*9
for i in range(x, 1+int(N)+len(N*9)):
    n = i
    for j in str(i):
        n += int(j)
    if n == int(N):
        print(i)
        temp = False
        break
if temp:
    print(0)