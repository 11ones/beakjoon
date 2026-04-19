// 2024년 12월 26일 22:06:04
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  double a, b, c;
  cin >> a >> b >> c;
  cout << (int)max(a * b / c, a / b * c);
}