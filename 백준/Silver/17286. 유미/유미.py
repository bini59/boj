yuu_mi = list(map(int, input().split()))
one = list(map(int, input().split()))
two = list(map(int, input().split()))
three = list(map(int, input().split()))
yuu_mi_dis = []
yuu_mi_dis.append([(abs(one[0]-yuu_mi[0])**2 + abs(one[1]-yuu_mi[1])**2)**0.5, 'one'])
yuu_mi_dis.append([(abs(two[0]-yuu_mi[0])**2 + abs(two[1]-yuu_mi[1])**2)**0.5, 'two'])
yuu_mi_dis.append([(abs(three[0]-yuu_mi[0])**2 + abs(three[1]-yuu_mi[1])**2)**0.5, 'three'])

dis = []
dis.append((abs(two[0] - one[0])**2 + abs(one[1]-two[1])**2)**0.5)
dis.append((abs(one[0] - three[0])**2 + abs(three[1]-one[1])**2)**0.5)
dis.append((abs(two[0] - three[0])**2 + abs(three[1]-two[1])**2)**0.5)


result = []
for i in range(3):
    for j in range(3):
        if 2-j == i:
            continue
        t = int(yuu_mi_dis[i][0] + dis[2-i] + dis[j])
        result.append(t)

result.sort()
print(result[0])