a = ""
while True:
    a = input()
    if a == "#":
        break
    result = 0
    for i in a:
        if i == 'a' or i == 'e' or i == 'i' or i == 'o' or i == 'u':
            result += 1
        if i == 'A' or i == 'E' or i == 'I' or i == 'O' or i == 'U':
            result += 1
            
    print(result)