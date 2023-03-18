import sys
for i in range(int(input())):
    string = list(sys.stdin.readline().split())
    
    for k in string[1]:
        for j in range(int(string[0])):
            print(k,end='')
    print()
    