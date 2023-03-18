rome_num = ['I', 'IV', 'V', 'IX', 'X', 'XL', 'L', 'XC', 'C', 'CD', 'D', 'CM', 'M']

x = input(); y = input()

def slice(num):
    sliced = []
    i = 0
    i_tf = True; x_tf = True; c_tf = True
    while i < len(num):
        if i <= len(num)-2:
            if num[i] == 'I' and (num[i+1] == 'V' or num[i+1] == 'X'):
                sliced.append('I'+num[i+1])
                i_tf = False
                i += 2
                continue
            if num[i] == 'X' and (num[i+1] == 'L' or num[i+1] == 'C'):
                sliced.append('X'+num[i+1])
                x_tf = False
                i += 2
                continue
            if num[i] == 'C' and (num[i+1] == 'D' or num[i+1] == 'M'):
                sliced.append('C'+num[i+1])
                c_tf = False
                i += 2
                continue
        sliced.append(num[i])
        i += 1

    return sliced
def change_to_num(char):
    if char == 'I':
        return 1
    elif char == 'IV':
        return 4
    elif char == 'V':
        return 5
    elif char == 'IX':
        return 9
    elif char == 'X':
        return 10
    elif char == 'XL':
        return 40
    elif char == 'L':
        return 50
    elif char == 'XC':
        return 90
    elif char == 'C':
        return 100
    elif char == 'CD':
        return 400
    elif char == 'D':
        return 500
    elif char == 'CM':
        return 900
    elif char == 'M':
        return 1000

def change_to_str(num):
    num_list = []
    num_list.append(num//1000)
    num %= 1000
    num_list.append(num//900)
    num %= 900
    num_list.append(num//500)
    num %= 500
    num_list.append(num//400)
    num %= 400
    num_list.append(num//100)
    num %= 100
    num_list.append(num//90)
    num %= 90
    num_list.append(num//50)
    num %= 50
    num_list.append(num//40)
    num %= 40
    num_list.append(num//10)
    num %= 10
    num_list.append(num//9)
    num %= 9
    num_list.append(num//5)
    num %= 5
    num_list.append(num//4)
    num %= 4
    num_list.append(num//1)
    return num_list

X = 0
for i in slice(x):
    X += change_to_num(i)
Y = 0
for i in slice(y):
    Y += change_to_num(i)
result = X+Y
print(result)
li = change_to_str(result)
str_result = ''

for i in range(len(li)):
    str_result += rome_num[(i+1)*(-1)]*li[i]
print(str_result)