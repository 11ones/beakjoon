// 2025년 1월 11일 01:14:50
// 컴파일 에러
// KB
// ms
#include <iostream>
int main() {
  int x, s = 0;
  while (std::cin >> x) {
      if (x == -1) break;
      s += x;
  }
  std:cout << s;
}