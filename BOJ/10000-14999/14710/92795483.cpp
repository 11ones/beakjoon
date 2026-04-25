// 2025년 4월 8일 17:08:14
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << (b % 60 || b / 60 != a % 60 ? "X" : "O");
}