def check(yut):
    many = 0
    for i in range(4):
        if yut[i] == '0':
            many += 1
    if many == 0:
        return 'E'
    elif many == 1:
        return 'A'
    elif many == 2:
        return 'B'
    elif many == 3:
        return 'C'
    else:
        return 'D'
    
x = input().split()
y = input().split()
z = input().split()
print(check(x))
print(check(y))
print(check(z))

