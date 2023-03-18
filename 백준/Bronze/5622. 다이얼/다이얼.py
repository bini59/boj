def num(char):
    if ord(char) >= 65 and ord(char) <= 67:
        return 2
    elif ord(char) >= 68 and ord(char) <= 70:
        return 3
    elif ord(char) >= 71 and ord(char) <= 73:
        return 4
    elif ord(char) >= 74 and ord(char) <= 76:
        return 5
    elif ord(char) >= 77 and ord(char) <= 79:
        return 6
    elif ord(char) >= 80 and ord(char) <= 83:
        return 7
    elif ord(char) >= 84 and ord(char) <= 86:
        return 8
    elif ord(char) >= 87 and ord(char) <= 90:
        return 9



string = input()
result = 0
for i in string:
    result += num(i)+1
print(result)