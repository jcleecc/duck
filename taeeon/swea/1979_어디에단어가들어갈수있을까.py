# SWEA 1979번 어디에 단어가 들어갈 수 있을까
def count_slots(lines, K):
    count = 0
    for line in lines:
        run = 0
        for cell in list(line) + [0]:
            if cell == 1:
                run += 1
            else:
                if run == K:
                    count += 1
                run = 0
    return count

T = int(input())
for test_case in range(1, T + 1):
    N, K = map(int, input().split())
    puzzle = [list(map(int, input().split())) for _ in range(N)]
    answer = count_slots(puzzle, K) + count_slots(zip(*puzzle), K)
    print(f'#{test_case} {answer}')