// 2026년 1월 28일 18:25:49
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;
int main() {
  cin.tie(0)->sync_with_stdio(0);
  double a, b, c;
  cin >> a >> b >> c;
  vector<double> p(41), t(41);
  p[20] = 1;
  for (int i = 0; i < 20; ++i) {
    for (int j = 0; j < 41; ++j) {
      if (p[j]) {
        t[j + 1] += p[j] * a;
        t[j - 1] += p[j] * b;
        t[j] += p[j] * c;
      }
    }
    p = t;
    t = vector<double>(41);
  }
  cout << fixed << setprecision(8);
  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < 10; ++j) {
      t[i] += p[i * 10 + j];
    }
    cout << t[i] << '\n';
  }
  cout << p[40];
}