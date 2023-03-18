a=int(input())
for i in range(1,2*a):
    if i <= a:
        print(' '*(a-i),end='')
        print('*'*(2*i-1))
    else:
        print(' '*(i-a),end='')
        print('*'*((2*a-i)*2-1))