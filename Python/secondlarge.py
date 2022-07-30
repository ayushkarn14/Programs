def solve(n, arr):
    arr.sort()
    for i in range(n - 1, -1, -1):
        if arr[i] != arr[n - 1]:
            return arr[i]


print(solve(7, [1, 10, 4, 6, 6, 7, 8]))
