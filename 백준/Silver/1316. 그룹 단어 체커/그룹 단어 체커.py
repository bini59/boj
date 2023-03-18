import sys

num =int(input())

group_word = 0
for i in range(num):

    word = list(sys.stdin.readline())
    t = []
    x = 0
    while x != len(word):
        if word[x] not in t:
            t.append(word[x])
        else:
            if word[x] != word[x-1]:
                group_word += 1
                break

        x += 1

print(num - group_word)