#자 시작해보겠습니다
x = input()
if len(x) == 1:
    x = '0' + x
def cal(x, y, z):
    t = int(x[0]) + int(x[1])
    t = str(t)
    if len(t) == 1:
        t = '0' + t
    result = x[1] + t[1]
    y += 1
    if result == z:
        return y
    else:
        return cal(result, y, z)

print(cal(x, 0, x))


