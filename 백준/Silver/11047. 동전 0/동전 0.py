coin = list(map(int, input().split()))
coin_list= []

for i in range(int(coin[0])):
    aa = int(input())
    if aa > coin[1]:
        break
    coin_list.append(aa)

pc_bang = coin[1]
total = 0
num = 0

while True:
    if total + (coin_list[-1]*10) > pc_bang:
        pass
    else:
        num += 10
        total += coin_list[-1]*10
        if total == pc_bang:
            print(num)
            break
        continue
        
    if total + coin_list[-1] > pc_bang:
        coin_list.remove(coin_list[-1])
        continue
    else:
        num += 1
        total += coin_list[-1]
    if total == pc_bang:
        print(num)
        break