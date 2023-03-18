a = input()
b = input()

if len(a) > len(b):
    a, b = b, a

res = [[0, -1, ""] for i in range(len(b))]

for i in range(len(a)):
    Max = [res[0][0], res[0][1], ""]
    for j in range(len(b)):
        if (a[i] == b[j]) and (j > Max[1]) and (Max[0]+1 > res[j][0]):
            res[j][0] = Max[0]+1
            res[j][1] = j
            res[j][2] = Max[2]+a[i]
            Max[0] = 0
        else:
            if res[j][0] >= Max[0]:
                Max[0] = res[j][0]
                Max[1] = res[j][1]
                Max[2] = res[j][2]
    #     print(res)
    # print("다음")

# print(res)
print(max(res)[0])
if(max(res)[0] > 0):
    print(max(res)[2])