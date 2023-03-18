import sys

dun = []


for i in range(int(input())):
    dun.append(list(map(int, input().split())))

rank = []


for i in dun:
    ran = 1
    for j in range(len(dun)):
        if j != dun.index(i):
            if i[0] < dun[j][0] and i[1] < dun[j][1]:
                ran += 1
    rank.append(ran)

for i in rank:
    sys.stdout.write(f'{i} ')