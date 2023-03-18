import sys
a = list(map(int, input().split()))

blocks = []

for i in range(a[0]):
    blocks.append(list(map(int, sys.stdin.readline().split())))
    
MAX = 0
for i in blocks:
    for j in i:
        if j > MAX:
            MAX = j

            
result = [0, 200000001]
pm  = [0, 0]

for i in range(MAX+1):
    pm = [0, 0]
    for j in range(len(blocks)):
        for k in range(len(blocks[j])):
            if blocks[j][k] > i:
                pm[0] += blocks[j][k] - i
            else:
                pm[1] += i - blocks[j][k]
                
    if (pm[0]+a[2]-pm[1]) < 0:
        continue
    if (pm[0] * 2 + pm[1]) <= result[1]:
        result[1] = pm[0]*2+pm[1]
        result[0] = i
        
print(f'{result[1]} {result[0]}')