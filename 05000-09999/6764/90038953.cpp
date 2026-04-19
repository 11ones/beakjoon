// 2025년 2월 13일 23:08:39
// 틀렸습니다
// KB
// ms
#include <iostream>
int main() {
    long a, b, c, d;
    std::cin >> a >> b >> c >> d;
    if(a == b && b == c && c == d) std::cout << "Fish At Constant Depth";
    else if(a <= b && b <= c && c <= d) std::cout << "Fish Rising";
    else if(a >= b && b >= c && c >= d) std::cout << "Fish Diving";
    else std::cout << "No Fish";
}