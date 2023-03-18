guitar = list(map(int, input().split()))

brand_six = []
brand_one = []

brand = []
for i in range(guitar[1]):
    brand = list(map(int, input().split()))
    brand_six.append(brand[0])
    brand_one.append(brand[1])

brand_one.sort()
brand_six.sort()

string_m = guitar[0]//6
string_n = guitar[0]%6

if brand_six[0] < brand_one[0]:
    if string_n != 0:
        print((string_m+1)*brand_six[0])
    else:
        print(string_m*brand_six[0])
elif brand_six[0] > brand_one[0]*6:
    print(guitar[0]*brand_one[0])
else:
    if string_n*brand_one[0] < brand_six[0]:
        print(string_m*brand_six[0]+string_n*brand_one[0])
    else:
        print((string_m+1)*brand_six[0])