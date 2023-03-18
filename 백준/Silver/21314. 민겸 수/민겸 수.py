number = input()

max = ""
min = ""

resultM = ""
resultm = ""

for i in range(len(number)):
    if number[i] == "M":
        max += "M"
        min += "M"
    else:
        resultM += "5"
        resultM += "0"*len(max)
        max = ""

        if (len(min)) > 0:
            resultm += "1"
            resultm += "0"*(len(min)-1)
        resultm += "5"
        min = ""
if len(max) > 0:
    resultM += "1" * len(max)
if len(min) > 0:
    resultm += "1"
    resultm += "0"*(len(min)-1)

print(resultM)
print(resultm)
