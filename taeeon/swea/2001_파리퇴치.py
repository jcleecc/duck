# SWEA 2001번 파리 퇴치
T = int(input())
for test_case in range(1, T + 1):
    N, M = map(int, input().split())
    S = [[0] * (N + 1) for _ in range(N + 1)]
    for i in range(1, N + 1):
        row = list(map(int, input().split()))
        for j in range(1, N + 1):
            S[i][j] = row[j - 1] + S[i - 1][j] + S[i][j - 1] - S[i - 1][j - 1]

    best = 0
    for i in range(M, N + 1):
        for j in range(M, N + 1):
            flies = S[i][j] - S[i - M][j] - S[i][j - M] + S[i - M][j - M]
            if flies > best:
                best = flies
    print(f'#{test_case} {best}')