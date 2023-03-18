import sys

int(input())

card = list(map(int, input().split()))

card_ = {}
for i in set(card):
    card_[i] = 0

for i in card:
    card_[i] += 1

int(input())

what = list(map(int, input().split()))



for i in what:
    try:
        print(card_[i], end=' ')
    except:
        print(0, end=' ')