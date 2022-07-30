d=int(input("Enter number of days: "))
k=int(input("Enter number of kilometers: "))
if d<=0 or k<=0:
    print("Invalid Input")
else:
    p1=4000*d
    p2=1500*d+9*k
    if p1>p2:
        print("Plan 2")
    else:
        print("Plan 1")
