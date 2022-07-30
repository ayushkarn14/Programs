t=int(input("Enter number of test cases"))
op=[0]*t
for i in range(0,t):
    n=int(input("N?"))
    nums=input("Enter numbers")
    nums_list=nums.split()
    nums_dict = { j : 0 for j in nums_list }
    for j in range(0,n):
        nums_dict[nums_list[j]]=nums_dict[nums_list[j]]+1
    max=0
    for j in range(0,n):
        if nums_dict[nums_list[j]] > max:
            max=nums_dict[nums_list[j]]
    if n==1:
        op[i]=0
    elif max==1:
        op[i]=-1
    else:
        op[i]=n-max+1
for i in range (0,t):
    print(op[i])