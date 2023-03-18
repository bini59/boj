import sys

def nm(n, li, k):
    global x, result, num
    if n == 6:
        result.append(li+[k])
        return

    for i in range(num.index(k), x):
        if num[i] not in li+[k]:
            nm(n+1, li+[k], num[i])
while True:
    temp = list(map(int, input().split()))
    x = temp[0]
    if x == 0:
        break
    num = temp[1:]
    num.sort()

    result = []

    for i in range(x):
        nm(1, [], num[i])

    for j in result:
        for k in j:
            sys.stdout.write(f'{k} ')
        sys.stdout.write('\n')
    print()