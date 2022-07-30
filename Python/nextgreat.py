def solve(n, nums):
    ans = []
    numsnums = nums + nums
    for i in range(0, n):
        f = 0
        for j in range(i, 2 * n):
            if numsnums[i] < numsnums[j]:
                ans.append(numsnums[j])
                f = 1
                break
        if f == 0:
            ans.append(-1)
        # if len(ans) == n:
        #     break
    return ans


print(solve(6, [1, 2, 3, 4, 5, 6]))