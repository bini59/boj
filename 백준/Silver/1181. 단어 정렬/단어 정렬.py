import sys

word_li = []
for i in range(int(input())):
    word_li.append(sys.stdin.readline())

word_li = set(word_li)
word_li = sorted(word_li, key = lambda x : (len(x), x))

for j in word_li:
    print(j, end = '')