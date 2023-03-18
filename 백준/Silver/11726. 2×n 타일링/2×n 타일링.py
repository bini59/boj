a=int(input())
x=[1,1]
i=0
while i<a:
    x.append(x[i]+x[i+1]);i+=1
print(x[a]%10007)
