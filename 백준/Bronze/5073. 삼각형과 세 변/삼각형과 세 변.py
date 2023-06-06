import sys


def checkInput(li):
    return False if sum(li) == 0 else True


def checkTriangle(li):
    M = max(li)
    return False if sum(li)-M <= M else True


def checkDuplicate(li):
    a = li[0]
    res = 1
    if li[1] == li[2]:
        res = 2
        if li[0] == li[1]:
            res = 3
    else:
        if li[0] == li[1] or li[0] == li[2]:
            res = 2
    return res


result = ["Scalene", "Isosceles", "Equilateral"]

while True:
    li = list(map(int, sys.stdin.readline().split()))
    if not checkInput(li):
        break
    if not checkTriangle(li):
        print("Invalid")
        continue
    du = checkDuplicate(li)
    print(result[du-1])
