from itertools import product
import sys

a, b = map(int, sys.stdin.readline().split())

x = list(range(1, a+1))

per = product(x, repeat = b)
for i in per:
    for j in i:
        sys.stdout.write(f'{j} ')
    sys.stdout.write('\n')