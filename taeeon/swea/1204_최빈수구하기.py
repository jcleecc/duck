# SWEA 1204번 최빈수 구하기
T = int(input())
for _ in range(T):
    order = int(input())
    scores = list(map(int, input().split()))

    frequency = [0] * 101
    for score in scores:
        frequency[score] += 1

    max_count = max(frequency)
    for score in range(100, -1, -1):
        if frequency[score] == max_count:
            print(f'#{order} {score}')
            break