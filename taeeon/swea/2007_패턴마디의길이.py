# SWEA 2007번 패턴 마디의 길이
T = int(input())
for test_case in range(1, T + 1):
    word = input().strip()

    for i in range(1, 11):
        if word[:i] == word[i:2 * i]:
            print(f"#{test_case} {i}")
            break