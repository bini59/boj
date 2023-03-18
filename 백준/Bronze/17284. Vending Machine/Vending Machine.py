charge = list(map(int, input().split()))
dragon = 5000
for i in charge:
    if i == 1:
        dragon -= 500
    elif i == 2:
        dragon -= 800
    elif i == 3:
        dragon -= 1000

print(dragon)