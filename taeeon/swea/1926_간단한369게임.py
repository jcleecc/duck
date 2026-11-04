# SWEA 1926번 간단한 369게임
N = int(input())
result = []
for i in range(1, N + 1):
    s = str(i)
    claps = s.count('3') + s.count('6') + s.count('9')
    result.append('-' * claps if claps else s)
print(' '.join(result))