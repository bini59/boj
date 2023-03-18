x = input().split()
문제 = []
for i in range(int(x[0])):
    t = input().split()
    문제.append(t)
for j in range(int(x[0])):
    for k in range(2):
        if int(문제[j][k]) > int(x[1]):
            문제[j][k] = '0'
        else:
            문제[j][k] = '1'
문제.sort()
점수 = []
for l in range(int(x[0])):
    if 문제[l][0] == '0':
        점수.append(0)
    else:
        if 문제[l][1] == '0':
            점수.append(100)
        else:
            점수.append(140)
score = 0
for m in range(int(x[2])):
    score += 점수.pop()
print(score)