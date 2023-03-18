import re

expression = input()


num = []
temp = False
result = 0
try:
    index = expression.index('-')
    temp = True
except:
    pass

if temp:
    num.append(list(map(int, expression[:index].split('+'))))
    num.append(list(map(int, re.split('\+|\-', expression[index+1:]))))
else:
    num.append(list(map(int, expression.split('+'))))

for i in range(len(num)):
    if i == 1:
        result -= sum(num[i])
    else:
        result += sum(num[i])
print(result)