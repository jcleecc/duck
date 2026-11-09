# SWEA 1209번 Sum
for _ in range(10):
    tc = int(input())
    board = [list(map(int, input().split())) for _ in range(100)]
    candidates = [sum(row) for row in board]
    candidates += [sum(col) for col in zip(*board)]
    candidates.append(sum(board[i][i] for i in range(100)))
    candidates.append(sum(board[i][99 - i] for i in range(100)))
    print(f'#{tc} {max(candidates)}')