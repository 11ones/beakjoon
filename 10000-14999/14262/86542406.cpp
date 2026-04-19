// 2024년 11월 17일 15:06:03
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m, t;
  cin >> n >> m >> t;
  map<char, int> f, r;
  array<char, 3> c = {'R', 'G', 'B'};
  array<array<char, 50>, 50> a{};
  array<array<char, 101>, 101> p{};
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
      if (!i || !j) f[a[i][j]]++;
    }
  }
  fill(&p[0][0], &p[100][101], '.');
  for (int i = 0; i < min(t, n + 1); i++) {
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < m; k++) {
        if (a[j][k] != '.') {
          p[i + j][i + k] = a[j][k];
        }
      }
    }
  }
  if (t > n + 1) {
    for (int i = 1; i < n; i++) {
      for (int j = 1; j < m; j++) {
        r[p[i + n][j + n]]++;
      }
    }
    for (auto e : c) {
      cout << f[e] * t + r[e] << '\n';
    }
    return 0;
  } else {
    for (int i = 0; i < n + t; i++) {
      for (int j = 0; j < m + t; j++) {
        r[p[i][j]]++;
      }
    }
    for (auto e : c) {
      cout << r[e] << '\n';
    }
  }
}