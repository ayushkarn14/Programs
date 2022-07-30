import math 
import random as r
def Log2(x):
    if x == 0:
        return False 
    return (math.log10(x) / math.log10(2)) #check log base 2

def powof2(n):
    return(math.ceil(Log2(n)) == math.floor(Log2(n))) #if x is power of 2

#print(Log2(n))
#print(powof2(n))

t = int(input())
for x in range(t):
    (n,k) = map(int,input().split())
    p = []
    u = []
    v = []
    if powof2(n):
        for c in range(1,n+1):
            p.append(c)
            
        q = int(Log2(n))  #value of q is power

        for y in range(0,k%q):
            for i in range(len(p)):
                if i%2==0:
                    u.append(p[i])
                    # print(p[i],end=" ")
                    
                else:
                    v.append(p[i])
                    #print(p[i],end=" ")
                
            res = u + v 
            p = res
            u = []
            v = []
        st = ""
        for g in res:
            st+=str(g)+" "
        
        print(st[:-1])