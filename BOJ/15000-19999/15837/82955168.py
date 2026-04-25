# 2024년 8월 25일 13:43:10
# 맞았습니다!!
# 31120KB
# 36ms
tc = int(input())
for _ in range(0, tc):
  n = int(input())
  n += 1
  print(n * n * (n * n - 1) * (n * n - 1) // 36)
