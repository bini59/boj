file_count = int(input())

if file_count == 1:
    print(input())
else:
    file_name = []
    for i in range(file_count):
        file_name.append(input())

    com_point = list(file_name[0])
    for j in file_name:
        for k in range(len(file_name[0])):
            if j[k] == com_point[k]:
                pass
            else:
                com_point[k] = '?'
    for l in com_point:
        print(l, end = '')
