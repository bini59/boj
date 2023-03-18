time = list(map(int, input().split()))

if time[-1] < 45:
    if time[0] != 0:
        time[0] -= 1
    else:
        time[0] = 23
    x = 45 - time[-1]
    time[-1] = 60 - x
else:
    time[-1] -= 45

print(f'{time[0]} {time[-1]}')