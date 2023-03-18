um = list(map(int, input().split()))

um_ = um[:]
um_.sort()
if um == um_:
    print('ascending')
else:
    um_.sort(reverse=True)
    if um_ == um:
        print('descending')
    else:
        print('mixed')