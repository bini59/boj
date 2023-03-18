x=int(input())
p=sorted([int(input())for _ in range(x)])
S=input().split()[::-1]
r=[p.pop(int(S[i]))for i in range(x)][::-1]
print(*r,sep='\n')