a = int(input())
n = 0
list = []

def sum(x):
    return x*(x+1)/2

while True:
    if sum(n) >= a:
        break
    else:
        n += 1

if n % 2 == 1:
    for i in range(1,n+1):
        list.append([n+1-i,i])
else:
    for j in range(1,n+1):
        list.append([j,n+1-j])

s = int(a - sum(n)-1)
t = list[s]
print(t[0],end='')
print('/',end='')
print(t[1])