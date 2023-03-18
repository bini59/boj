scan = list(map(int, input().split()))


result = []
def nm(n, li, k):
    global scan, result
    if n == scan[1]:
        result.append(li+[k])
        return

    for i in range(k, scan[0]+1):
        
        nm(n+1, li+[k], i)


for i in range(1, scan[0]+1):
    nm(1, [], i)

for j in result:
    for k in j:
        print(k, end=' ')
    print()