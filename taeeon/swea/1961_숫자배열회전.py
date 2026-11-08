# SWEA 1961번 숫자 배열 회전
def rotate(board):
    return list(zip(*board[::-1]))

T = int(input())
for test_case in range(1, T + 1):
    N = int(input())
    board = [input().split() for _ in range(N)]
    r90 = rotate(board)
    r180 = rotate(r90)
    r270 = rotate(r180)
    print(f'#{test_case}')
    for i in range(N):
        print(''.join(r90[i]), ''.join(r180[i]), ''.join(r270[i]))