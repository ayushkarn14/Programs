import math


def solve(n):
    if math.ceil(math.log10(n) / math.log10(2)) == math.floor(
        math.log10(n) / math.log10(2)
    ):
        return 1
    return 0


print(solve(21))
