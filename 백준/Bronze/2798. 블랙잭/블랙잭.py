info = list(map(int, input().split()))

card = list(map(int, input().split()))
card.sort()
re = []
result = 0
for i in range(info[0]-2):
    for j in range(info[0]-1):
        if i == j:
            continue
        for k in range(info[0]):
            if i == k or j == k:
                continue
            result = (card[i] + card[j] + card[k]) - info[1]
            if result <= 0:
                re.append(result)
re.sort()


print(info[1]+max(re))