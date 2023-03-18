a = list(map(int, input().split()))

number = list(range(1, a[0]+1))

def fac(start, end):
    if start == end:
        return end
    elif start < end:
        return 1
    return start*fac(start-1, end)


def printing(n, num, total):
    if n == a[0] - a[1]:
        return
    for i in range(n):
        if n == a[0]:
            for j in range(fac(a[0]-1, a[0]-a[1]+1)):
                total.append([num[i]])
        else:
            for k in range(len(total)//len(num)):
                total[i*(len(total)//len(num))+k].append(num[i])
        y = num.pop(i)
        x = fac(n-1, a[0] - a[1] + 1)
        printing(n-1, num, total[x*i : x*(i+1)])
        num.insert(i, y)


total = []

printing(a[0], number, total)

for i in total:
    for j in range(len(i)):
        if j != len(i)-1:
            print(i[j], end=' ')
        else:
            print(i[j])