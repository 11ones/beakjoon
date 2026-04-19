// 2025년 1월 18일 00:35:42
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
int main() {
    int a, b, c = 0;
    std::cin >> a;
    for (int i = 0; i < 5; i++) {
        std::cin >> b;
        if (b == a) c++;
    }
    std::cout << c;
}