a = []
a.append(int(input()))
a.append(int(input()))
a.append(int(input()))

a.sort()

Sum = a[0] + a[1] + a[2]
if Sum != 180:
    print("Error")
else:
    if (a[0] == a[1]) and (a[1] == a[2]):
        print("Equilateral")
    elif (a[0] == a[1]) or (a[1] == a[2]):
        print("Isosceles")
    else:
        print("Scalene")