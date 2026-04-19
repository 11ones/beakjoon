// 2024년 1월 14일 23:21:46
// 맞았습니다!!
// 2020KB
// 0ms
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

typedef long long l;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  l ans = 0;
  cin >> n;
  pair<l, l> a, b, f;
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
  cout << setprecision(1) << fixed << abs(ans / 2) + (ans % 2 == 0 ? 0 : 0.5);
}