t=int(input())
for i in range(t):
    str1=input()
    arr=str1.split(" ")
    arr[0]=arr[0][1:]
    print (",".join([str(len(i)) for i in arr]))