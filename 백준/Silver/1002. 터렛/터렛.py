import sys

count = 0
for i in range(int(input())):
    count = 0
    xy = list(map(int, sys.stdin.readline().split()))
    a = xy[0:3]; b = xy[3:]
    dis = ((a[0]-b[0])**2) + ((a[1]-b[1])**2)
    dis_s_r = (a[2]+b[2])**2
    temp = 0; temp_0 = 0 
    if a[2] > b[2]:
        temp = a[2]
        temp_0 = b[2]
    else:
        temp = b[2]
        temp_0 = a[2]


    if dis == dis_s_r:
        print(1)
    elif dis_s_r < dis:
        print(0)
    else:
        if (dis**0.5+temp_0)**2 == temp**2:
            if dis == 0:
                print(-1)
            else:
                print(1)
        elif (dis**0.5+temp_0)**2 < temp**2:
            print(0)
        else:
            print(2)

            