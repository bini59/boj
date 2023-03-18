y, x = map(int, input().split())

all_cell = []
for i in range(y):
    all_cell.append(list(input()))

answer = 30000
selected_cell = []
for i in range(y-7):

    for j in range(x-7):
        selected_cell = []
        for k in range(i, i+8):
            selected_cell.append(all_cell[k][j:j+8])
        temp = 0
        for l in range(8):
            for m in range(8):
                if l == 0 and m == 0:
                    if selected_cell[l][m] == 'W':
                        selected_cell[l][m] = 'B'
                        temp += 1
                elif m == 0:
                    if selected_cell[l-1][m] == 'B' and selected_cell[l][m] == 'B':
                        selected_cell[l][m] = 'W'
                        temp += 1
                    elif selected_cell[l-1][m] == 'W' and selected_cell[l][m] == 'W':
                        selected_cell[l][m] = 'B'
                        temp += 1
                else:
                    if selected_cell[l][m-1] == 'B' and selected_cell[l][m] == 'B':
                        selected_cell[l][m] = 'W'
                        temp += 1
                    elif selected_cell[l][m-1] == 'W' and selected_cell[l][m] == 'W':
                        selected_cell[l][m] = 'B'
                        temp += 1
        if temp < answer:
            answer = temp
        
        selected_cell = []
        for k in range(i, i+8):
            selected_cell.append(all_cell[k][j:j+8])
        
        temp = 0
        for l in range(8):
            for m in range(8):
                if l == 0 and m == 0:
                    if selected_cell[l][m] == 'B':
                        selected_cell[l][m] = 'W'
                        temp += 1
                elif m == 0:
                    if selected_cell[l-1][m] == 'B' and selected_cell[l][m] == 'B':
                        selected_cell[l][m] = 'W'
                        temp += 1
                    elif selected_cell[l-1][m] == 'W' and selected_cell[l][m] == 'W':
                        selected_cell[l][m] = 'B'
                        temp += 1
                else:
                    if selected_cell[l][m-1] == 'B' and selected_cell[l][m] == 'B':
                        selected_cell[l][m] = 'W'
                        temp += 1
                    elif selected_cell[l][m-1] == 'W' and selected_cell[l][m] == 'W':
                        selected_cell[l][m] = 'B'
                        temp += 1

        if temp < answer:
            answer = temp

print(answer)
                    
