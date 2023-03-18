import math
import sys

N = int(input())

t = []
stars = []
for _ in range(N):
    t = []
    for _ in range(N):
        t.append('*')
    stars.append(t[:])


n_ = int(math.log(N, 3))
def re_star(n):
    global N, stars
    for i in range(3**(n-1), N, 3**n):
        for j in range(3**(n-1), N, 3**n):
            for k in range(3**(n-1)):
                for l in range(3**(n-1)):
                    stars[i+k][j+l] = ' '
    if 3**n == N:
        return
    re_star(n+1)

re_star(1)
for m in range(N):
    for n in range(N):
        sys.stdout.write(stars[m][n])
    sys.stdout.write('\n')