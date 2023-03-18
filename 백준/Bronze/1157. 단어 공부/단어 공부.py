a = sorted(list(input().upper()))
t = set(a)

x = sorted(list([a.count(i), i] for i in t))
if len(x) == 1:
    print(x[-1][1])
else:
    if x[-1][0] == x[-2][0]:
        print('?')
    else:
        print(x[-1][1])
