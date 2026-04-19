// 2024년 12월 12일 22:54:32
// 맞았습니다!!
// 2156KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, d;
  cin >> n >> d;
  vector<vector<char>> v(n);
  vector<vector<int>> r(n, vector<int>(n, 1e8));
  for (int i = 0; i < n; i++) {
    r[i][i] = 0;
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      char c;
      cin >> c;
      if (c == 'Y') {
        v[i].push_back(j);
        r[i][j] = 1;
      }
    }
  }
  for (int k = 0; k < n; k++) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        r[i][j] = min(r[i][j], r[i][k] + r[k][j]);
      }
    }
  }
  int mx = 0;
  for (auto e : r) {
    for (auto ee : e) {
      if (ee == 1e8) {
        cout << -1;
        return 0;
      }
      mx = max(mx, ee);
    }
  }
  cout << mx * d;
}