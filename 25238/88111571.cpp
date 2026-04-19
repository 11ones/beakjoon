// 2025년 1월 3일 03:19:06
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  double a, b;
  cin >> a >> b;
  cout << (a - a * b / 100 < 100 ? 1 : 0);
}