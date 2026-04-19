// 2025년 1월 30일 23:58:22
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  double a, b, c;
  cin >> a >> b >> c;
  double x = (a + b - c) / 2;
  double y = (a + c - b) / 2;
  double z = (b + c - a) / 2;
  if(x > 0 && y > 0  && z > 0) {
  cout << 1 << '\n' << setprecision(1) << fixed << x << " " << y << " " << z;
  } else {
    cout << -1;
  }
}