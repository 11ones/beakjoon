# 2023년 5월 15일 01:47:00
# 출력 형식이 잘못되었습니다
# KB
# ms
t = int(input())
for x in range(t) :
    n, m = map(int, input().split())
    print(2 * m - n, " ", n - m)