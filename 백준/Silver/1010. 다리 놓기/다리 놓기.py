test_case = int(input())

def facto(n):
    if n == 0:
        return 1
    return facto(n-1)*n

for i in range(test_case):
    site = list(map(int, input().split()))
    answer = 1
    for j in range(site[0]):
        answer *= (site[1]-j)
    answer= answer//facto(site[0])
    print(answer)