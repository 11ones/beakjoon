// 2025년 1월 11일 01:15:09
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
int main() {
  int x, s = 0;
  while (std::cin >> x) {
      if (x == -1) break;
      s += x;
  }
  std::cout << s;
}