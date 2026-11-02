# SWEA 2072번 홀수만 더하기
T = int(input())
for test_case in range(1, T + 1):
    nums = list(map(int, input().split()))
    total = sum(n for n in nums if n % 2 == 1)
    print(f"#{test_case} {total}")