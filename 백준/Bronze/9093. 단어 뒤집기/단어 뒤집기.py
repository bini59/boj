n = int(input())


def reverseWord(li):
    for i in range(len(li)):
        li[i] = li[i][-1::-1]
        print(li[i], end=" ")
    print()


for i in range(n):
    li = list(map(str, input().split(" ")))
    reverseWord(li)
