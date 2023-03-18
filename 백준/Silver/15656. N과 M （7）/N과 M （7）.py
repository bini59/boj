import sys

scan = list(map(int, input().split()))
num = list(map(int, input().split()))
num.sort()

result = []
def nm(n, li, k):
    global scan, result, num
    if n == scan[1]:
        result.append(li+[k])
        return

    for i in range(scan[0]):
        nm(n+1, li+[k], num[i])


for i in range(scan[0]):
    nm(1, [], num[i])

for j in result:
    for k in j:
        sys.stdout.write(f'{k} ')
    sys.stdout.write('\n')