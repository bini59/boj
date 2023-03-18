a = int(input())
if a == 1:
    print('1 bottle of beer on the wall, 1 bottle of beer.\n'
          'Take one down and pass it around, no more bottles of beer on the wall.\n')
    print('No more bottles of beer on the wall, no more bottles of beer.\n'
          'Go to the store and buy some more, 1 bottle of beer on the wall.')
else:
    for i in range(a, -1, -1):
        if i == 0:
            print('No more bottles of beer on the wall, no more bottles of beer.\n'
    f'Go to the store and buy some more, {a} bottles of beer on the wall.')
        elif i == 1:
            print('1 bottle of beer on the wall, 1 bottle of beer.\n'
    'Take one down and pass it around, no more bottles of beer on the wall.\n')
        elif i == 2:
            print('2 bottles of beer on the wall, 2 bottles of beer.\n'
                  'Take one down and pass it around, 1 bottle of beer on the wall.\n')
        else:
            print(f'{i} bottles of beer on the wall, {i} bottles of beer.\n'
    f'Take one down and pass it around, {i-1} bottles of beer on the wall.\n')