import sys
x = int(input())
for i in range(x):
    input = sys.stdin.readline()
    for j in range(len(input)):
        if input[j] == ' ':
            a = input[0:j]
            b = input[j+1:]
            break
    print(int(a)+int(b))