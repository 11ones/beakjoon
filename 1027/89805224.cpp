// 2025년 2월 9일 13:25:48
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, mx = 0;
  cin >> n;
  vector<double> v(n);
  for (auto &e : v) cin >> e;
  vector<vector<bool>> d(n, vector<bool>(n, 0));
  for (int i = 0; i < n - 1; i++) {
    d[i][i + 1] = d[i + 1][i] = 1;
    for (int j = i + 2; j < n; j++) {
      double x = v[i], t = (v[j] - v[i]) / (j - i);
      for (int k = 1; k < j - i; k++) {
        x += t;
        if (x < v[i + k] || abs(x - v[i + k]) <= 1e-8) {
          goto E;
        }
      }
      d[i][j] = d[j][i] = 1;
    E:;
    }
  }
  for (int i = 0; i < n; i++) {
    int tmx = 0;
    for (auto e : d[i]) tmx += e;
    mx = max(mx, tmx);
  }
  cout << mx;
}