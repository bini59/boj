a=input()
if int(a[0:2]) >= 10:
    x = int(a[0:2])
    y = int(a[3:])
else:
    x = int(a[0])
    y = int(a[2:])
days = y
for i in range(1,x):
    if i == 2:
        days += 28
    elif i <= 7:
        if i % 2 == 1:
            days += 31
        else:
            days += 30
    elif i >= 8:
        if i % 2 == 1:
            days += 30
        else:
            days += 31
if days % 7 == 1:
    print('MON')
elif days % 7 == 2:
    print('TUE')
elif days % 7 == 3:
    print('WED')
elif days % 7 == 4:
    print('THU')
elif days % 7 == 5:
    print('FRI')
elif days % 7 == 6:
    print('SAT')
elif days % 7 == 0:
    print('SUN')