basic = list(map(int, input().split()))

num_list = list(range(1, basic[0]+1))
num_count = basic[1]

num_array = []

def create_arr(arr, num,):
    for i in arr:
        arr_ = num[:]
        if i not in arr_:
            arr_.append(i)
        if len(arr_) == num_count:
            arr_0 = sorted(arr_)
            if arr_0 not in num_array:
                num_array.append(arr_0)
        else:
            create_arr(arr[1:], arr_)

create_arr(num_list, [])

for k in num_array:
    for l in k:
        if l == k[-1]:
            print(l, end='')
        else:
            print(l, end= ' ')
    print()
