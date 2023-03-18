sorting = []
for i in input():
    sorting.append(i)
sorting.sort(reverse=True)
result = ''
for j in sorting:
    result += j
print(int(result))
