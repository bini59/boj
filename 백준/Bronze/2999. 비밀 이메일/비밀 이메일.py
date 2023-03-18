a = input()

N = len(a)
li = list()
T = 1
while T <= N:
    if  N % T == 0:
        li.append(T)
        if N // T == T:
            li.append(T)
    T += 1

R = li[:len(li)//2]
C = li[len(li)//2:]

r = R[len(R)-1]
c = C[0]

string = []
for m in range(r):
    string.append([])
for i in range(c):
    for j in range(r):
        string[j].append(a[r*i+j])


st = ''
for k in range(r):
    for l in range(c):
        st += string[k][l]
print(st)
