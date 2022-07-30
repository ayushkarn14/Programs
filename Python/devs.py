def solve(n, nums, target):
    l = 0
    h = n - 1
    while l != h:
        m = (l + h - 1) // 2
        if target == nums[m]:
            return m
        elif target < nums[m]:
            h = m - 1
        else:
            l = m + 1
    return -1


print(solve(3, [1, 2, 3], 1))
