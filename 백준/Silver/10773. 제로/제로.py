import sys

answer = []
for i in range(int(input())):
    x = int(sys.stdin.readline())
    if x == 0:
        answer.pop()
    else:
        answer.append(x)

print(sum(answer))