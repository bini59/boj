num = int(input())

x = y = 1

for _ in range(num-1):
    x, y = y%15746, (x+y)%15746

print(y%15746)