x, y, z = map(int, input().split())

result = 0
if x != y and y != z and z != x:
    result = max(x, y, z)*100
if x == y or y == z or z == x:
    if x == y:
        result = x*100+1000
    if y == z or z == x: 
        result = z*100+1000
if x == y and y == z:
    result = x * 1000+10000
    
print(result)