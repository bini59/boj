a = int(input())
for i in range(a):
    s = list(map(int,input().split()))
    a = 0
    for j in range(1, s[0]+1):
        a += s[j]
    a = a/s[0]
    t = 0
    for k in range(1, s[0]+1):
        if s[k] > a:
            t += 1
    print(f"{t/s[0]*100:0.3f}%")
