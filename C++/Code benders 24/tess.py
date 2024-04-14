def ii():
    return int(input())


def li(c=int):
    return list(map(c, input().split()))


def check(arr1, miid, h):
    time = 0
    for i in range(len(arr1)):
        if arr1[i] % miid != 0:
            time += arr1[i] // miid + 1
        else:
            time += arr1[i] // miid
    if time <= h:
        return True
    else:
        return False


def solve(arr, h):
    l = 1
    l2 = sorted(arr)
    r = l2[::-1][0]
    while l < r:
        mid = l + (r - l) // 2
        if check(arr, mid, h):
            r = mid
        else:
            l = mid + 1
    return r


if __name__ == "__main__":
    h = ii()
    pno = ii()
    arr = li()
    print(solve(arr, h))
