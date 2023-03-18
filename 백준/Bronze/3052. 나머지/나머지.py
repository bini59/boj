import sys

nam = []
for _ in range(10):
    num = int(sys.stdin.readline())
    if num%42 in nam:
        continue
    else:
        nam.append(num%42)
print(len(nam))
