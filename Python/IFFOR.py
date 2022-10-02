t = int(input())
for x in range(t):
    n = int(input())
    for i in range(n):
        if i == 0:
            print(3, end=" ")
        elif (i % 2) == 0:
            print(2 * i, end=" ")
        else:
            print(i * i, end=" ")
    print()
