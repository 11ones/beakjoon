// 2025년 1월 28일 19:04:06
// 컴파일 에러
// KB
// ms
#include <iostream>
int main() {
    char a, b, c, d, e;
    std::cin >> a >> b >> c >> d >> e;
    std::cout << (a + c - e - '0' ? "NO" : "YES");