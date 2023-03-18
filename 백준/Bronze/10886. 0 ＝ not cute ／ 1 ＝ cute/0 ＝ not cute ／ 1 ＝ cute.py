res = 0

for i in range(int(input())):
    a = int(input())    
    if a == 0:
        res -= 1
    else:
        res += 1
        
if res > 0:
    print("Junhee is cute!")
else:
    print("Junhee is not cute!")