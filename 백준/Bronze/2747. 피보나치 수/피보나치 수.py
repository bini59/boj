n = int(input())
x = [0, 1]


for i in range(n):
    x.append(x[i]+x[i+1])
print(x[n])