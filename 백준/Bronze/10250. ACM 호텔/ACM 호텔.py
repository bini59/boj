import sys



for i in range(int(input())):

    hotel = list(map(int, sys.stdin.readline().split()))
    number_list = list(range(1, hotel[0]+1))
    number_list.insert(0, number_list.pop())
    if hotel[2] % hotel[0] != 0:
        print(int(f'{number_list[hotel[2]%hotel[0]]}'+f'{hotel[2]//hotel[0]+1:0>2}'))
    else:
        print(int(f'{number_list[hotel[2] % hotel[0]]}' + f'{hotel[2] // hotel[0]:0>2}'))


