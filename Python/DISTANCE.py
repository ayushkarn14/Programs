import math
t=int(input())
for i in range(t):
    x1,y1,x2,y2 = list(map(int, input().split()))
    print("Distance: ","{:.2f}".format(math.sqrt(pow(abs(x1-x2),2)+pow(abs(y1-y2),2))))