import sys
from math import gcd
from functools import reduce
n = int(input())
mat = []
for _ in range(n):
    mat.append(1)
cou = []
info = []
for y in range(n-1):
    info.append(list(map(int, sys.stdin.readline().split())))
def kak(information):
    global cou, mat
    temp = []
    x = 1
    for i in range(len(information)):
        a, b, t, s = information[i][0], information[i][1], information[i][2], information[i][3]
        if a in cou:
            if s % t != 0 or s < t:
                x *= t

            mat[b] *= (s/t)*mat[a]
            cou.append(b)
        elif b in cou:
            if t % s != 0 or t < s:
                x *= s

            mat[a] *= (t/s)*mat[b]
            cou.append(a)
        else:
            if (i != 0 and len(information) == n-1) :
                temp.append([a, b, t, s])
                continue
            if (len(information) != n-1):
                temp.append([a, b, t, s])
                continue
            if t % s != 0 or t < s:
                x *= s

            mat[a] *= (t/s)*mat[b]
            cou += [a, b]
    if temp:
        return x*kak(temp)
    else:
        return x;



def f_gcd(list):
    tem = reduce(gcd, list)
    return tem
wow = kak(info)


for j in range(len(mat)):
    mat[j] = round(wow*mat[j])
g_c = f_gcd(mat)
for l in mat:
    print(l//g_c, end=' ')