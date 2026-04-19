// 2025년 4월 8일 17:10:53
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << (b % 6 || b / 6 != a % 6 ? "X" : "O");
}