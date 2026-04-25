# 2024년 8월 25일 13:39:18
# 틀렸습니다
# KB
# ms
tc = int(input())
for _ in range(0, tc):
  n = int(input())
  n += 1
  t = 0
  print(int(n * n * (n * n - 1) * (n * n - 1) / 36))
