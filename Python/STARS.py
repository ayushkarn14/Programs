t=int(input())
for i in range(t):
    n=int(input())
    for i in range(n,0,-1):
        for j in range(i):
            if j%5==4:
                print("#",end="")
            else:
                print("*",end="")
        print()