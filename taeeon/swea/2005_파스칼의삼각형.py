# SWEA 2005번 파스칼의 삼각형
T = int(input())
for test_case in range(1, T + 1):
    N = int(input())
    print(f'#{test_case}')
    row = [1]
    for _ in range(N):
        print(*row)
        row = [1] + [row[k] + row[k + 1] for k in range(len(row) - 1)] + [1]