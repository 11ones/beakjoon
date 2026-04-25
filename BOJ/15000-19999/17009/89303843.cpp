// 2025년 1월 29일 22:05:11
// 컴파일 에러
// KB
// ms
#include <iostream>
int main() {
    int a, b, c, d, e, f;
    char s;
    std::cin >> a >> b >> c >> d >> e >> f;
    a = a * 3 + b * 2 + c, b = d * 3 + e * 2 + f;
    if(a > b)
    std::cout << "A";
    if(a < b)
    std::cout << "B";
    if(a == b)
    std::cout << "T";