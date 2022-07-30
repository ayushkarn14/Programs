age=int(input("Enter age: "))
height=float(input("Enter height: "))
weight=int(input("Enter weight: "))
chest=int(input("Enter chest measurement: "))
f=True
if age<19 or age>24:
    print("Disqualified due to age")
    f=False
if height<5.2 or height>5.6:
    print("Disqualified due to height")
    f=False
if weight<45 or weight>60:
    print("Disqualified due to weight")
    f=False
if chest<=45:
    print("Disqualified due to chest")
    f=False
if f:
    print("Fit to army")
    