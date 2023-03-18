a = []
for i in range(8):
    a.append(input())


result =0
for i in range(8):
    for j in range(i%2, 8, 2):
        if(a[i][j] == 'F'):
            result+= 1

print(result)