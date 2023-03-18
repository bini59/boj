x,y=map(int,input().split())
z=list(map(int,input().split()))
for i in range(x):
    if z[i]<y:
        print(z[i])