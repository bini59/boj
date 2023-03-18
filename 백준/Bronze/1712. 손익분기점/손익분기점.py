go, han, pri = map(int, input().split())

if han >= pri:
    print(-1)
else:
    print((go//(pri-han))+1)