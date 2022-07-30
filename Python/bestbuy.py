def solve(n, prices):
    max = 0
    best = 0
    buyat = 0
    for i in range(n-1, 0, -1):
        if prices[i] > max:
            max = prices[i]
        buyat = max-prices[i]
        if best < buyat:
            best = buyat
    return best


print(solve(6, [7, 1, 5, 3, 6, 4]))
