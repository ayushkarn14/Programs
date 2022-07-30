def solve(n):
    ar = []
    st = ""
    for i in range(1, n + 1):
        st = ""
        for j in range(1, i + 1):
            st += str(j)
        for j in reversed(range(1, i)):
            st += str(j)
        ar.append(st)
    return ar


print(solve(5))
