in_out = []
for i in range(4):
    x = list(map(int, input().split()))
    in_out.append(x)

people = [0, 0, 0, 0]

for i in range(4):
    people[i] += in_out[i][1]
    people[i] -= in_out[i][0]
    if i < 3:
        people[i+1] += people[i]


people.sort()
print(people[3])