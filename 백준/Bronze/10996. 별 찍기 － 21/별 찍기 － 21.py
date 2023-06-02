n = int(input())


def printStar(a):
    for i in range(a):
        print(" " if i % 2 == 1 else "*", end="")
    print()
    for i in range(a):
        print(" " if i % 2 == 0 else "*", end="")
    print()


for i in range(n):
    printStar(n)
