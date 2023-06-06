import sys

n = int(input())


def getLocation():
    li = []
    for _ in range(4):
        li.append(list(map(int, sys.stdin.readline().split())))
    return li


def distance(a, b):
    return (a[0]-b[0])**2 + (a[1]-b[1])**2


def check(li):
    d = [
        distance(li[0], li[1]),
        distance(li[0], li[2]),
        distance(li[1], li[3]),
        distance(li[2], li[3])
    ]
    # print(d)
    if d[0] == d[1] and d[2] == d[3] and d[0] == d[2] and d[0]+d[1] == distance(li[1], li[2]):
        return 1
    return 0


for i in range(n):
    li = getLocation()
    li.sort()
    print(check(li))
