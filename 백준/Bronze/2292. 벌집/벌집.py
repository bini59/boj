a = int(input())
t = 0
while True:
    if a == 1:
        break
    if a >= (t*(t+1)/2)*6+2 and a <= ((t+1)*(t+2)/2)*6+1:
        t += 1
        break
    else:
        t += 1

print(t+1)