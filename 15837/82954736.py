# 2024년 8월 25일 13:31:59
# 시간 초과
# KB
# ms
tc = int(input())
for _ in range(0, tc):
  n = int(input())
  n += 1
  t = 0
  for x in range(1, n):
    for y in range(1, n):
      t += x * y * (n - x) * (n - y)
  print(t)
