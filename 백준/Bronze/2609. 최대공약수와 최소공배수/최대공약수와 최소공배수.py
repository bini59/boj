x, y = map(int, input().split())

def Gcd(x, y):
    if y > x:
        x, y = y, x
    if x % y == 0:
        return y
    else:
        return Gcd(y, x%y)

gcd = Gcd(x, y)
print(gcd)
print((x//gcd)*(y//gcd)*gcd)