while True:
    x = input()

    if x == '0':
        break
    
    if len(x)%2 == 0:
        if x[:len(x)//2] == x[len(x)//2:][::-1]:
            print('yes')
        else:
            print('no')
    else:
        if x[:len(x)//2] == x[len(x)//2+1:][::-1]:
            print('yes')
        else:
            print('no')
        
        
