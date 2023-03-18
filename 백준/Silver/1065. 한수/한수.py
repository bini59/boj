num = int(input())

true = True
han = 0
cha = 0
for i in range(1, num+1):
    t = str(i)
    true = True
    cha = 0
    for j in range(len(str(i))-1):
        if j == 0:
            cha = int(t[j+1])-int(t[j])
        else:
            if int(t[j+1])-int(t[j]) != cha:
                true = False
                break
    if true:
        han += 1
print(han)
