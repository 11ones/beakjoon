// 2025년 1월 29일 22:05:51
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
int main() {
    int a, b, c, d, e, f;
    std::cin >> a >> b >> c >> d >> e >> f;
    a = a * 3 + b * 2 + c, b = d * 3 + e * 2 + f;
    if(a > b)
    std::cout << "A";
    if(a < b)
    std::cout << "B";
    if(a == b)
    std::cout << "T";
    }