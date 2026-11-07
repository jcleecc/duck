# SWEA 1945번 간단한 소인수분해
PRIMES = (2, 3, 5, 7, 11)

T = int(input())
for test_case in range(1, T + 1):
    N = int(input())
    exponents = []
    for p in PRIMES:
        e = 0
        while N % p == 0:
            N //= p
            e += 1
        exponents.append(e)
    print(f'#{test_case}', *exponents)