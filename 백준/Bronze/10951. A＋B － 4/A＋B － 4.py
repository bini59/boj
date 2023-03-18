import sys
a = sys.stdin.readlines()
for i in a:
    x = i.split(' ')
    print(int(x[0])+int(x[-1][:-1]))
