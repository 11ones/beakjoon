// 2025년 2월 12일 01:45:05
// 맞았습니다!!
// 2020KB
// 0ms
#include<iostream>
int main(){
    int a, b, c;
    std::cin >> a >> b >> c;
    a = a * 1440 + b * 60 + c, b = 16511;
    std::cout << (a < b ? -1 : a - b);
}