// 2024년 3월 4일 20:10:11
// 틀렸습니다
// KB
// ms
#include <iostream>
int main() {
  int n;
  std::cin >> n;
  std::cout << ((n < 14) ? (1 + n / 2) * (1 + (n + 1) / 2) : 64);
}