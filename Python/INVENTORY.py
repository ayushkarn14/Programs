tc = int(input())

for i in range(tc):

    list = {}

    N = int(input())

    for k in range(N):
        item = input().split()
        list[item[0]] = int(item[1])

    M = int(input())

    for j in range(M):
        operation = input().split()  # 0-> operation , 1->name , 2->quantity

        if operation[0] == "ADD":

            if operation[1] in list.keys():
                list[operation[1]] = int(operation[2]) + list[operation[1]]
                print("UPDATED Item {}".format(operation[1]))
            else:
                list[operation[1]] = int(operation[2])
                print("ADDED Item {}".format(operation[1]))

        elif operation[0] == "DELETE":
            if operation[1] in list.keys() and int(operation[2]) <= list[operation[1]]:
                if list[operation[1]] == 0:
                    print("Item {} could not be DELETED".format(operation[1]))
                else:
                    list[operation[1]] = list[operation[1]] - int(operation[2])
                    print("DELETED Item {}".format(operation[1]))

            elif int(operation[2]) > list[operation[1]]:
                print("Item {} could not be DELETED".format(operation[1]))

            elif operation[1] not in list.keys():
                print("Item {} does not exist".format(operation[1]))

    sum = 0
    for l, m in list.items():
        sum = sum + m

    print("Total Items in Inventory: {}".format(sum))
