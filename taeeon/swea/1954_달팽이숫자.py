# SWEA 1954번 달팽이 숫자
DR = (0, 1, 0, -1)
DC = (1, 0, -1, 0)

T = int(input())
for test_case in range(1, T + 1):
    N = int(input())
    board = [[0] * N for _ in range(N)]
    r = c = d = 0
    for num in range(1, N * N + 1):
        board[r][c] = num
        nr, nc = r + DR[d], c + DC[d]
        if not (0 <= nr < N and 0 <= nc < N) or board[nr][nc]:
            d = (d + 1) % 4
            nr, nc = r + DR[d], c + DC[d]
        r, c = nr, nc
    print(f'#{test_case}')
    for row in board:
        print(*row)