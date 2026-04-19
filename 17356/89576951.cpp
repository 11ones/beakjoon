// 2025년 2월 5일 04:30:57
// 맞았습니다!!
// 2208KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  cout << 1 / (1 + pow(10, double(b - a) / 400));
}