a = input()
for i in range(len(a)):
    if i % 10 == 0 and i>1:
        print()
    print(a[i],end='')