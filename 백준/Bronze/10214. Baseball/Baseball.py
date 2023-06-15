def game():
    li = [0, 0]
    for i in range(9):
        a, b = map(int, input().split())
        li[0] += a
        li[1] += b
    if li[0] == li[1]:
        print("Draw")
        return
    if li[0] > li[1]:
        print("Yonsei")
        return
    if li[0] < li[1]:
        print("Korea")
        return

n = int(input())
for i in range(n):
    game()
    