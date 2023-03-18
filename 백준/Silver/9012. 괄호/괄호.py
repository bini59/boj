import sys

for i in range(int(input())):
    temp = sys.stdin.readline().rstrip()
    count = 0
    tt = True
    for j in temp:
        if j == '(':
            count += 1
        else:
            if count <= 0:
                print('NO')
                tt = False
                break
            else:
                count -= 1
    if tt:
        if count == 0:
            print('YES')
        else:
            print('NO')