// 2024년 12월 29일 23:13:30
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

typedef long long L;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  L n, k, mx = -1e12, t;
  cin >> n >> k;
  vector<vector<L>> v(n + 1, vector<L>(n, 0));
  for (L i = 1; i <= n; i++) {
    for (L j = 0; j < i; j++) {
      cin >> v[i][j];
      v[i][j] += v[i - 1][j];
    }
  }
  for (L i = 1; i + k <= n + 1; i++) {
    for (L j = 0; j < i; j++) {
      t = 0;
      for (L x = 0; x < k; x++) {
        t += v[i + k - 1][j + x] - v[i + x - 1][j + x];
      }
      mx = max(mx, t);
    }
  }
  for (L i = k; i + k <= n + 1; i++) {
    for (L j = 0; j + k <= i; j++) {
      t = 0;
      for (L x = 0; x < k; x++) {
        t += v[i + x][j + x] - v[i - 1][j + x];
      }
      mx = max(mx, t);
    }
  }
  cout << mx / (k * (k + 1) / 2);
}