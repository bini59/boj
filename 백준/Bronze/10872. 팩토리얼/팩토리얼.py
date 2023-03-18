def pac(i):
    if i == 0:
        return 1
    else:
        return i*pac(i-1)

x = int(input())

print(pac(x))