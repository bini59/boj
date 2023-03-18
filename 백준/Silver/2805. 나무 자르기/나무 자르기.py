import sys

n, m = map(int, sys.stdin.readline().split())

n = list(map(int, sys.stdin.readline().split()))
temp = max(n)


key_num = [temp//2, 0, temp]

answer = 0
while True:
    answer = 0
    for i in n:
        if i > key_num[0]:
            answer += (i-key_num[0])
    
    if answer < m:
        if key_num[0] == (key_num[0]+key_num[1])//2:
            key_num[0] -= 1
        key_num[2] = key_num[0]
        key_num[0] = (key_num[0]+key_num[1])//2
    elif answer > m:
        if key_num[0] == (key_num[2]+key_num[0])//2:
            break
        key_num[1] = key_num[0]
        key_num[0] = (key_num[0]+key_num[2])//2
    elif answer == m:
        break
    
print(key_num[0])