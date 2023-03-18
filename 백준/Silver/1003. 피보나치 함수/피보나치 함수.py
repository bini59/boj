fibonacci = [0, 1]

for i in range(int(input())):
    fibonacci = [0, 1]
    n = int(input())

    if n == 0:
        print(f'{1} {0}')
    elif n == 1:
        print(f'{0} {1}')
    else:
        for _ in range(n-1):
            x = fibonacci[1]
            fibonacci[1] += fibonacci[0]
            fibonacci[0] = x
        print(f'{fibonacci[0]} {fibonacci[1]}')
