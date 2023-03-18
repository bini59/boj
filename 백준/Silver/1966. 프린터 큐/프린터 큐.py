import sys

for i in range(int(input())):
    M, N = map(int, sys.stdin.readline().split())
    Q = []
    rank = list(map(int, sys.stdin.readline().split()))
    for j in range(len(rank)):
        Q.append((rank[j], j))

    count = 1
    while len(Q) != 0:
        temp = True
        for j in range(1, len(Q)):
            if Q[0][0] < Q[j][0]:
                Q.append(Q.pop(0))
                temp = False
                break
        if temp:
            if Q.pop(0)[1] == N:
                print(count)
                break
            count += 1


