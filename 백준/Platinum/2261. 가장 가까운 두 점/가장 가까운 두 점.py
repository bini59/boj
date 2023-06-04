import sys

MAX = 1000000000


def removeDuplicate(list: list):
    idx = 0
    while idx+1 < len(list):
        if list[idx] == list[idx+1]:
            list.pop(idx+1)
        idx += 1


def distance(l: list, r: list):
    return (l[0]-r[0])**2 + (l[1]-r[1])**2


def getDotShor(list: list, d: int, idx: int, start: int, end: int):
    res = d
    # print(idx, end)
    x = list[idx][0]
    y = list[idx][1]
    i = (start+end)//2
    i = i if i > idx else idx+1
    while i < end and ((list[i][0]-x)**2 <= res):
        if abs(list[i][1]-y)**2 >= res:
            i += 1
            continue
        tmpD = distance(list[idx], list[i])
        res = res if res < tmpD else tmpD
        i += 1
    return res


def conquer(list: list, start: int, end: int, d: int):
    res = d
    mid = (list[start][0] + list[end-1][0])//2
    remain = (list[start][0] + list[end-1][0]) % 2
    l = mid-d
    r = mid+remain+d
    for i in range(start, end):
        if (mid-list[i][0])**2 >= l and i < (start + end)//2 + 1:
            tmp = getDotShor(list, res, i, start, end)
            # print(f"start : {start} end : {end} i : {i} dist : {tmp} l : {l} r : {r}")
            res = res if res < tmp else tmp

    return res


def divide(list: list, start: int, end: int):
    if start + 1 == end:
        return MAX
    res = MAX
    mid = (start + end)//2
    d1 = divide(list, start, mid)
    d2 = divide(list, mid, end)
    res = d1 if d1 < d2 else d2
    res = conquer(list, start, end, res)
    return res


def main():
    n = int(input())
    dots = []
    for i in range(n):
        dots.append(list(map(int, sys.stdin.readline().split())))
    dots.sort()
    removeDuplicate(dots)
    print(divide(dots, 0, len(dots)))


if __name__ == "__main__":
    main()
