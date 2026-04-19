// 2024년 1월 17일 23:51:17
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>

int main() {
  int x;
  std::cin >> x;
  x = 1000 - x;
  std::cout << x / 500 + (x % 500) / 100 + (x % 100) / 50 + (x % 50) / 10 + (x % 10) / 5 + (x % 5);
}