for i in range(int(input())):
    score = []
    for j in input():
        if j == 'O':
            score.append(1)
        else:
            score.append(0)
    for k in range(1, len(score)):
        if score[k] != 0 and score[k-1] != 0:
            score[k] = score[k-1] + 1
    result = 0
    for  l in score:
        result += l
    print(result)