import sys


ll = []
for i in range(int(input())):
    ll.append(int(sys.stdin.readline()))

ll.sort()

for i in ll:
    print(i)