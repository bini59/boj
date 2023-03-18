x=int(input())
score=list(map(int,input().split()))
score.sort()
for i in range(x):
    score[i] = (score[i]/score[x-1])*100
average=0
for j in range(x):
    average += score[j]
print(average/x)