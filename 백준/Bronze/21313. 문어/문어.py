n = int(input())

for i in range(n):
    if i == n-1 and i % 2 == 0:
        print(3, end='')
        continue
    if i % 2 == 0:
        print(1, end=' ')
        continue
    if i % 2 == 1:
        print(2, end=' ')
    
    