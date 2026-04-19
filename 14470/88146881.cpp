// 2025년 1월 3일 22:00:52
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;
  cout << (a < 0 ? -a * c + d + b * e : (b - a) * e);
}