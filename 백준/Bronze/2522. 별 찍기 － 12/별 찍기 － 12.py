n = int(input())
for i in range(1, 2*n):
    tmp = i if i < n else 2*n-i
    for j in range(n-1, -1, -1):
        if j - tmp < 0:
            print("*", end="")
        else:
            print(" ", end="")
    print("")
