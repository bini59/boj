string = input()

count = 0
for i in range(len(string)):
    if string[i] == '=':
        if string[i-1] == 'z':
            try:
                if string[i-2] == 'd':
                    count -= 1
            except:
                pass
        elif string[i-1] == 'c'or string[i-1] == 's':
            pass
        else:
            count += 1
    elif string[i] == '-':
        pass

    elif string[i] == 'j':
        if string[i-1] == 'l' or string[i-1] == 'n':
            pass
        else:
            count += 1
    else:
        count += 1

print(count)
