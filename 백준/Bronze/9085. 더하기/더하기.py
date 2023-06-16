def case():
    n = int(input())
    return sum(map(int, input().split()))

n = int(input())
for i in range(n):
    print(case())