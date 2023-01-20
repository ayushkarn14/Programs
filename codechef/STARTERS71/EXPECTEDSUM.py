def calculate(p, q):

    mod = 998244353
    expo = 0
    expo = mod - 2
    while (expo):
        if (expo & 1):
            p = (p * q) % mod
        q = (q * q) % mod
        expo >>= 1

    return p


t = int(input())
for cases in range(t):
    a, b = list(map(int, input().split()))
    if (a+b) % 2:
        turn = (a+b+1)//2
    else:
        turn = (a+b)//2
    print(calculate(turn*a, a+b))
