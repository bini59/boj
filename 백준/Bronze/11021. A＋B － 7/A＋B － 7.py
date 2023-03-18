case = int(input())
for i in range(1, case+1):
    x = list(map(int, input().split()))
    print(f'Case #{i}: {x[0]+x[1]}')