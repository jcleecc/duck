# SWEA 2805번 농작물 수확하기
T = int(input())
for test_case in range(1, T + 1):
    N = int(input())
    mid = N // 2
    total = 0
    for r in range(N):
        row = input().strip()
        gap = abs(r - mid)
        total += sum(map(int, row[gap:N - gap]))
    print(f'#{test_case} {total}')