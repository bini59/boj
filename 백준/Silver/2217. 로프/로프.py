import sys

n = int(input())

rope = []

for i in range(n):
    rope.append(int(sys.stdin.readline()))

rope.sort()

weight = []

for i in range(0, len(rope)):
    weight.append(rope[i]*(len(rope)-i))

weight.sort()
print(weight[-1])