// 2025년 4월 8일 17:13:17
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << (b % 12 || b / 12 != a % 30 ? "X" : "O");
}