value = 1
for i in range(3):
    value = value*int(input())
num_many = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
for j in str(value):
        num_many[int(j)] += 1
for k in num_many:
    print(k)