n=int(input("Enter number of cities which have offices"))
a=['A']*n
nn=n
c=0
print("Enter city names")
while n!=0:
    a[c]=input()
    c+=1
    n-=1
a.sort()
v=int(input("Enter number of cities which have been visited"))
print("Cities which have offices:")
print(a[0:nn])
print("Cities visited:")
print(a[0:v])
print("Cities not visited:")
print(a[v:nn])
