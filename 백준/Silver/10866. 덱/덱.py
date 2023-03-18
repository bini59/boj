import sys

command_num = int(input())

deque = []

for i in range(command_num):
    command = sys.stdin.readline().split()
    if command[0] == 'push_front':
        deque.insert(0, command[1])
    elif command[0] == 'push_back':
        deque.append(command[1])
    elif command[0] == 'size':
        print(len(deque))
    elif command[0] == 'empty':
        if len(deque) == 0:
            print(1)
        else:
            print(0)
    elif command[0] == 'front' or command[0] =='back':
        if len(deque) == 0:
            print(-1)
        else:
            if command[0] == 'front':
                print(deque[0])
            else:
                print(deque[-1])
    elif command[0] == 'pop_front' or command[0] == 'pop_back':
        if len(deque) == 0:
            print(-1)
        else:
            if command[0] == 'pop_front':
                print(deque.pop(0))
            else:
                print(deque.pop())