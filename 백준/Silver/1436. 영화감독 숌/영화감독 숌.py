x = int(input())


def shon(x, y):
    if x > 3700:
        y += 1000000*(x//3700)
        return shon(x%3700, y)
    if x > 280:
        if x > 1800 and x < 2801:
            y += 666000 + x - 1801
            return y
        if x > 1680 and x < 1801:
            y += 600000
            x -= 1680
            y += (x // 19)*10000

            return shon(x%19, y)
        if x >= 2801 and x < 2861:
            y += 600000
            x -= 2800
            if x < 4:
                y += 60000
            else:
                x -= 3
                y += (x // 19 + 7)*10000
                x -= (x//19)*19

            return shon(x%19, y)
        if x < 1681:
            y += (x // 280)*100000
            return shon(x%280, y)
        if x > 2860:
            x -= 2860
            y += (x//280+7)*100000
            return shon(x%280, y)
    if x > 19:
        if x < 115:
            y += (x//19)*10000
            return shon(x%19, y)
        if x > 114 and x < 121:
            y += 60000
            return shon(x-114, y)
        if x > 120 and x < 221:
            y += 66600 + x-121
            return y
        if x > 220 and x < 281:
            x -= 220
            if x < 4:
                y += 60000 +7000
            else:
                x -= 3
                y += (x// 19 + 7)*10000
                x -= (x//19)*19

            return shon(x%19, y)
        if x > 280:
            x -= 280
            y += (x//19+7)*10000
            return shon(x%19, y)

    if x < 20:

        if x < 7:
            y += (x-1)*1000+666
        if x > 6 and x < 17:
            y += 6660 + x - 7
        if x > 16:
            y += (x-10)*1000 + 666
        return y

        
print(shon(x, 0))