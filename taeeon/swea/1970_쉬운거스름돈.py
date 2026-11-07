# SWEA 1970번 쉬운 거스름돈
MONEYS = [50000, 10000, 5000, 1000, 500, 100, 50, 10]

T = int(input())
for test_case in range(1, T + 1):
    N = int(input())
    counts = []
    for money in MONEYS:
        count, N = divmod(N, money)
        counts.append(count)
    print(f'#{test_case}')
    print(*counts)