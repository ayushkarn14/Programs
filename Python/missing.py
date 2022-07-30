def solve(n, arr):
    ans=[]
    for i in range(n+2):
        if i not in arr:
            ans.append(i)
    return ans
