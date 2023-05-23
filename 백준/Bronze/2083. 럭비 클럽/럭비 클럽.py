import sys

while True:
    li = sys.stdin.readline().split()
    if li[0] == "#" and li[1] == "0" and li[2] == "0":
        break
    print(li[0], end=" ")
    if int(li[1]) > 17 or int(li[2]) >= 80:
        print("Senior")
    else:
        print("Junior")
        
    