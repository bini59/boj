x = list(input())
t = []

for i in range(len(x)//2):
    if x[i] == x[len(x)-1-i]:
        t.append(1)
    else:
        print(0)
        t.append(0)
        break
if 0 not in t:
    print(1)