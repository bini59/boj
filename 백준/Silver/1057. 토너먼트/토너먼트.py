base = list(map(int, input().split()))

def tournament(people, kim, lim, round=1):
    if people == 1:
        print(-1)
        return
    if kim//2+kim%2 == lim//2+lim%2:
        print(round)
        return
    tournament(people//2+people%2, kim//2+kim%2, lim//2+lim%2, round+1)
if base[1] > base[2]:
    base[1], base[2] = base[2], base[1]
tournament(base[0], base[1], base[2])