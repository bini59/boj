def P_N(a):
    P.append(P[a-5]+P[a-1])
for i in range(int(input())):
    P = [1, 1, 1, 2, 2]
    a = int(input())
    if a > 5:
        for j in range(5, a):
            P_N(j)
        print(P[a-1])
    else:
        print(P[a-1])
