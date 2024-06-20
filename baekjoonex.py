stack = []
command = []



for _ in range(int(input())):
    command.append(list(map(int, input().split())))

for i in range(len(command)):
    if command[i][0] == 1:
        stack.append(command[i][1])
    elif command[i][0] == 2:
        if len(stack) == 1:
            print(-1)
        elif len(stack) > 0:
            stack.reverse()
            stack = stack[:-1]
            print(*stack)
        else:
            print(-1)
    elif command[i][0] == 3:
        print(len(stack))
    elif command[i][0] == 4:
        if len(stack) > 0:
            print(0)
        else:
            print(1)
    elif command[i][0] == 5:
        if len(stack) > 0:
            print(stack[-1])
        else:
            print(-1)
