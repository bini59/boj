a = int(input())
stick = [64]
many = 0
def sum(stick):
    c = 0
    for i in stick:
        c += i
    return c
if a < 64:
    while True:
        stick[0] = stick[0]//2
        if sum(stick) < a:
            stick.append(stick[0])
        elif sum(stick) == a:
            break

for j in stick:
    many += 1

print(many)