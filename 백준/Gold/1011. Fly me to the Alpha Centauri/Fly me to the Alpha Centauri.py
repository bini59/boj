count = int(input())

for _ in range(count):
    distance = list(map(int, input().split()))
    D = distance[1] - distance[0]

    i = 1
    while True:
        if D == 0:
            print((i-1)*2)
            break
        if D - i*2 < 0:
            if D > i:
                print(i*2)
                break
            else:
                print(i*2-1)
                break
        else:
            D -= i*2
        i += 1
