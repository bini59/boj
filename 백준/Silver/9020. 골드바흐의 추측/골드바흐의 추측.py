import sys


x = []
N = int(sys.stdin.readline())

for i in range(N):
    x.append(int(sys.stdin.readline()))

max_num = max(x)

che = [1] * (max_num+1)
che[0] = 0; che[1] = 0

for i in range(2, int(max_num**0.5)+1):
    if che[i]:
        for j in range(2*i, max_num+1, i):
            if che[j]:
                che[j] = 0

for i in range(N):
    n = x[i]
    for j in range(n//2+1, 1, -1):
        if che[j]:  
            if che[n-j]:
                temp = [j, n-j]
                break

    sys.stdout.write(f'{min(temp)} {max(temp)}\n')


