a=int(input())
for i in range(1,2*a):
    if i <= a:
        print('*'*i,end='')
        print(' '*((a-i)*2),end='')
        print('*'*i)
    else:
        print('*'*(2*a-i),end='')
        print(' '*((i-a)*2),end='')
        print('*'*(2*a-i))