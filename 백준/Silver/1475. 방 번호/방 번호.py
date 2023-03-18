a = input()
n = len(a)
list1 = []
t = []
x = 1
y = 0
z = 0
w = 0
for i in range(n):
    list1.append(a[i])

for i in range(n):
    if list1[i] == '6':
        list1[i] = '9'
        w += 1
    elif list1[i] == '9':
        w += 1
list1.sort()
list1.append(1)
for i in range(w):
    t.append(list1.pop())
n -= w
for i in range(1,n+1):
    if list1[i-1] == list1[i]:
        x += 1
    elif z == 0:
        y += x
        x = 1
        z += 1
    elif z == 1:
        if x > y:
            y += x-y
            if i != n:
                x = 1
        else:
            x = 1
if y > len(t)//2 + len(t)%2:
    print(y)
else:
    print(len(t)//2+len(t)%2)