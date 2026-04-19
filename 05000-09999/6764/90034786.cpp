// 2025년 2월 13일 21:45:43
// 틀렸습니다
// KB
// ms
#include <iostream>
int main() {
    long a, b, c, d;
    std::cin >> a >> b >> c >> d;
    if(a > b && b > c && c > d) std::cout << "Fish Diving";
    else if(a < b && b < c && c < d) std::cout << "Fish Rising";
    else if(a == b && b == c && c == d) std::cout << "Constant Depth";
    else std::cout << "No Fish";
}