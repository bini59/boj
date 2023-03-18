ham = 10000000
drink = 10000000
for i in range(3):
    buger_price = int(input())
    if buger_price < ham:
        ham = buger_price
for i in range(2):
    drink_price = int(input())
    if drink_price < drink:
        drink = drink_price
print(drink+ham-50)