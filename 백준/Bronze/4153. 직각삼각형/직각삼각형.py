import sys

while True:
    line = list(map(int, sys.stdin.readline().split()))
    if line[0] == 0 and line[1] == 0 and line[2] == 0:
        break
    line.sort()
    if line[0]**2 + line[1]**2 == line[2]**2:
        print('right')
    else:
        print('wrong')