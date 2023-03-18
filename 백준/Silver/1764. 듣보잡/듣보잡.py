import sys

li = list(map(int, sys.stdin.readline().split()))

n = li[0]
m = li[1]

words = {}

result = 0
resWord = []

temp = ""

for i in range(n):
    words[input()] = 1

for i in range(m):
    temp = input()
    if temp in words:
        result += 1
        resWord.append(temp)

resWord.sort()

print(result)
for i in resWord:
    print(i)