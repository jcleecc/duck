# SWEA 1974번 스도쿠 검증
def is_valid(board):
    groups = board + list(zip(*board))
    groups += [[board[r][c] for r in range(i, i + 3) for c in range(j, j + 3)]
               for i in range(0, 9, 3) for j in range(0, 9, 3)]
    return all(len(set(g)) == 9 for g in groups)

T = int(input())
for test_case in range(1, T + 1):
    board = [list(map(int, input().split())) for _ in range(9)]
    print(f'#{test_case} {int(is_valid(board))}')