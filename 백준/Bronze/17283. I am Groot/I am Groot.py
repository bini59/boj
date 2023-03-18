line = int(input())
rate = int(input())
lines = 0
count = 1
while True:
    line = int(line *(rate/100))
    if line <= 5:
        break
    lines += (2**count)*line
    count += 1

print(lines)