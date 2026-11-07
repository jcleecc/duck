# SWEA 1859번 백만 장자 프로젝트
T = int(input())
for test_case in range(1, T + 1):
    N = int(input())
    prices = list(map(int, input().split()))
    profit = 0
    max_price = 0
    for price in reversed(prices):
        if price > max_price:
            max_price = price
        else:
            profit += max_price - price
    print(f'#{test_case} {profit}')