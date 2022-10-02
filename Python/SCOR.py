t=int(input())
for j in range(t):
    n=int(input())
    dict={}
    for i in range(n):
        # str = input()
        # name,score=str.split(" ")
        name,score = input().split()
        if name not in dict:
            dict[name]=float(score)
    max_keys = list()
    itemMaxValue = max(dict.items(), key=lambda x: x[1])
    for key, value in dict.items():
        if value == itemMaxValue[1]:
            max_keys.append(key)
    for i in max_keys:
        print(i)