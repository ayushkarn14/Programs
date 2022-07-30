def solve(n, arr, key):
    for i in range(0, n):
        if arr[i] == key:
            return i
        if i < n - 1:
            if arr[i] < key and arr[i + 1] > key:
                return i + 1
    return 0


print(solve(5, [1, 3, 4, 5, 10], 2))
