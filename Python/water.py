def solve(n, arr):
    maxi = 0
    l = 0
    r = n - 1
    while l < r:
        maxi = max(maxi, min(arr[l], arr[r]) * (r - l))
        if arr[l] < arr[r]:
            l += 1
        else:
            r -= 1
    return maxi


print(solve(8, [1, 2, 1, 1, 1, 1, 1, 1]))
