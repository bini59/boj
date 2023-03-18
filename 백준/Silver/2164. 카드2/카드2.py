n = int(input())

arr = [i for i in range(1, n+1)]

while (len(arr) != 1):
    temp = []
    for i in range(1, len(arr), 2):
        temp.append(arr[i])
    if len(arr) % 2 == 1:
        temp.insert(0, arr[-1])
    arr = temp

print(arr[0])