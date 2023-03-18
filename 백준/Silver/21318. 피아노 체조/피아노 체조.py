import sys

n = int(input())

music = list(map(int, sys.stdin.readline().split()))

mistake = [0] * n
if n > 1:
    if music[0] > music[1]:
        mistake[0] = 1

    for i in range(1, len(music)-1):
        if music[i] > music[i+1]:
            mistake[i] = mistake[i-1]+1
        else:
            mistake[i] = mistake[i-1]

    mistake[-1] = mistake[-2]

m = int(input())

for i in range(m):
    a, b = map(int, sys.stdin.readline().split())
    result = 0
    if a == 1:
        result = mistake[b-1]
    else:
        result = mistake[b-1]- mistake[a-2]
    
    if b != 1 and mistake[b-2] < mistake[b-1]:
        result -= 1
    if b == 1 and mistake[0] == 1:
        result -= 1
    print(result)
