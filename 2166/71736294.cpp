// 2024년 1월 14일 23:24:58
// 맞았습니다!!
// 2020KB
// 4ms
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  double ans = 0;
  cin >> n;
  pair<double, double> a, b, f;
  cin >> a.first >> a.second;
  f = a;
  cin >> b.first >> b.second;
  ans += a.first * b.second - a.second * b.first;
  for (int i = 2; i < n; i++) {
    a = b;
    cin >> b.first >> b.second;
    ans += a.first * b.second - a.second * b.first;
  }
  ans += b.first * f.second - b.second * f.first;
  cout << setprecision(1) << fixed << fabs(ans / 2);
}