def solve(s1, s2):
    arr1 = [0] * 26
    arr2 = [0] * 26
    if len(s1) == len(s2):
        for i in s1:
            arr1[ord(i) - 97] = arr1[ord(i) - 97] + 1
        for i in s2:
            arr2[ord(i) - 97] = arr2[ord(i) - 97] + 1
        # print(arr1)
        # print(arr2)
        if arr1 == arr2:
            return 1
    return 0


print(solve("ab", "bae"))
