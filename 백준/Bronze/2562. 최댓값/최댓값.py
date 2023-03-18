num = []
for i in range(9):
    num.append(int(input()))
num_ = num[:]
num_.sort()
print(num_[-1])
print(num.index(num_[-1])+1)