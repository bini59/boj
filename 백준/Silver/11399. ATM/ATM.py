input()
time = list(map(int, input().split()))

total = 0
time.sort()
for i in range(len(time)):
    if i >= 1:
        time[i] += time[i-1]
    total += time[i]
print(total)