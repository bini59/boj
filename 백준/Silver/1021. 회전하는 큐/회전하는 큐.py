N, M = map(int, input().split())
location = list(map(int, input().split()))

li = [i for i in range(1, N+1)]

ans = 0

for i in location:
    while True:
        if i == li[0] or len(li) == 1:
            li.pop(0)
            break
        if li.index(i) > len(li)//2:
            li.insert(0, li.pop())
            ans += 1
        else:
            li.append(li.pop(0))
            ans += 1

print(ans)