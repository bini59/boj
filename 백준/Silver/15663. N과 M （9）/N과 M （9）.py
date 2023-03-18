import sys

scan = list(map(int, input().split()))
num = list(map(int, input().split()))
num.sort()

result = []
def nm(n, li, index):
    global scan, result, num
    if n == scan[1]:
        result.append(li+[num[index[-1]]])
        return


    for i in range(scan[0]):
        if i not in index:
            nm(n+1, li+[num[index[-1]]], index+[i])


for i in range(scan[0]):
    nm(1, [], [i])

result = list(set(map(tuple, result)))
result.sort()
for j in result:
    for k in j:
        sys.stdout.write(f'{k} ')
    sys.stdout.write('\n')