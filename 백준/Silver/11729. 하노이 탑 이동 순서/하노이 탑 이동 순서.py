import sys

many = int(input(''))
print(2**many-1)


def hanoi(n, x, y, z):
    if n == 1:
        sys.stdout.write(f'{x} {z}\n')
        return

    hanoi(n-1, x, z, y)
    sys.stdout.write(f'{x} {z}\n')
    hanoi(n-1, y, x, z)


hanoi(many, 1, 2, 3)