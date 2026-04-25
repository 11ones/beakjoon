// 2024년 11월 17일 15:24:25
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m, t;
  cin >> n >> m >> t;
  map<char, long long> f, r;
  array<char, 3> c = {'R', 'G', 'B'};
  array<array<char, 50>, 50> a{};
  array<array<char, 101>, 101> p{};
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }
  fill(&p[0][0], &p[100][101], '.');
  for (int i = 0; i < min(t, min(n, m) + 1); i++) {
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < m; k++) {
        if (a[j][k] != '.') {
          p[i + j][i + k] = a[j][k];
        }
      }
    }
  }
  for (int i = 0; i < 101; i++) {
    for (int j = 0; j < 101; j++) {
      f[p[i][j]]++;
    }
  }
  if (t > min(n, m) + 1) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (!i || !j) r[p[i + min(n, m)][j + min(n, m)]]++;
      }
    }
    for (auto e : c) {
      cout << f[e] + r[e] * (t - min(m, n) - 1) << '\n';
    }
    return 0;
  } else {
    for (auto e : c) {
      cout << f[e] << '\n';
    }
  }
}