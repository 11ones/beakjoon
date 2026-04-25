// 2023년 5월 15일 01:46:43
// 컴파일 에러
// KB
// ms
t = int(input())
for x in range(t) :
    n, m = map(int, input().split())
    print(2 * m - n, n - m)