resistance = ["black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"]


answer = 0
for i in range(3):
    x = input()
    if i == 2:
        answer *= 10**resistance.index(x)
        break
    answer += resistance.index(x)*(10**(1-i))
    
print(answer)