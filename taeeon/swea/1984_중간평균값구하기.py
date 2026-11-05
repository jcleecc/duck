# SWEA 1984번 중간 평균값 구하기
T = int(input())
for test_case in range(1, T + 1):
    nums = sorted(map(int, input().split()))
    middle = nums[1:-1]
    average = int(sum(middle) / len(middle) + 0.5)
    print(f'#{test_case} {average}')