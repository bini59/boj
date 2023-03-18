import sys

count = 1
meet = []
for i in range(int(input())):
    meet.append(list(map(int, input().split())))



meet_ = sorted(meet, key=lambda x : [x[1], x[0]])


meet = meet_[0]
for j in range(1, len(meet_)):

    if meet[1] <= meet_[j][0]:
        meet = meet_[j]

        count += 1
print(count)