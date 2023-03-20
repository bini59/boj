def solution(record):
    answer = []
    conti = []
    user = {}
    for i in record:
        command = i.split()
        if command[0] == 'Enter':
            user[command[1]] = command[2]
            conti.append(['Enter', command[1]])
        elif command[0] == 'Leave':
            conti.append(['Leave', command[1]])
        elif command[0] == 'Change':
            user[command[1]] = command[2]

    for command in conti:
        if command[0] == 'Enter':
            answer.append(f'{user[command[1]]}님이 들어왔습니다.')
        elif command[0] == 'Leave':
            answer.append(f'{user[command[1]]}님이 나갔습니다.')


    return answer