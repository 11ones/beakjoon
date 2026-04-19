// 2024년 7월 25일 23:24:46
// 맞았습니다!!
// 2152KB
// 0ms
#include <bits/stdc++.h>
#define g0 get<0>
#define g1 get<1>
#define g2 get<2>

using namespace std;
typedef tuple<int, int, int> tp;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int dx[4] = {1, 0, -1, 0};
  int dy[4] = {0, -1, 0, 1};

  int n;
  cin >> n;
  array<array<bool, 101>, 101> a = {};
  for (int o = 0; o < n; o++) {
    int x, y, d, g;
    cin >> x >> y >> d >> g;
    vector<tp> v;
    v.push_back({y, x, d});
    for (int u = 0; u < g; u++) {
      int l = v.size();
      for (int i = 0; i < l; i++) {
        auto t = v.back();
        int ty = g0(t) + dy[g2(t)];
        int tx = g1(t) + dx[g2(t)];
        v.push_back({ty, tx, (g2(v[l - i - 1]) + 1) % 4});
      }
    }
    for (auto e : v) {
      a[g0(e)][g1(e)] = 1;
      a[g0(e) + dy[g2(e)]][g1(e) + dx[g2(e)]] = 1;
    }
  }

  int cnt = 0;
  for (int i = 0; i < 100; i++) {
    for (int j = 0; j < 100; j++) {
      if (a[i][j] && a[i + 1][j] && a[i][j + 1] && a[i + 1][j + 1]) {
        cnt++;
      }
    }
  }
  cout << cnt;
}