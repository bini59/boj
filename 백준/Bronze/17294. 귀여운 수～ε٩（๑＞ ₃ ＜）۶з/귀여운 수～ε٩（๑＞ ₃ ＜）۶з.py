def kawaii(n):
    a = str(n)
    if len(a) <= 2:
        print('◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!')
        return
    else:
        gong_cha = int(a[0]) - int(a[1])

    for i in range(1, len(a)):
        if i == len(a)-1:
            print('◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!')
            return
        else:
            if (int(a[i]) - int(a[i+1])) == gong_cha:
                continue
            else:
                print('흥칫뿡!! <(￣ ﹌ ￣)>')
                return
            
kawaii(int(input()))