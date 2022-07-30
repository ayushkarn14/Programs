def is_Leap(y):
    if(y%4==0 and y%100!=0):
        return True
    elif(y%400==0):
        return True
    else:
        return False
year=int(input())
print(is_Leap(year))