# SWEA 1989번 초심자의 회문 검사
T = int(input())
for test_case in range(1, T + 1):
    word = input().strip()
    print(f"#{test_case} {int(word == word[::-1])}")