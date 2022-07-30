def maxSubarrayProduct(n, arr):
    buff1 = arr[0]
    buff2 = arr[0]
    maxi = arr[0]
    for i in range(1, n):
        temp = max(max(arr[i], arr[i] * buff1), arr[i] * buff2)
        buff2 = min(min(arr[i], arr[i] * buff1), arr[i] * buff2)
        buff1 = temp
        maxi = max(maxi, buff1)

    return maxi


arr = [6, -3, -10, 0, 2]
n = len(arr)
print(f"Maximum Sub array product is {maxSubarrayProduct(n,arr)}")
