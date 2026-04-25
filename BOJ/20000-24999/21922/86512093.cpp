// 2024년 11월 16일 16:36:19
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

array<array<int, 2000>, 2000> a{}, v{};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int dx[4] = {0, 1, 0, -1};
  int dy[4] = {1, 0, -1, 0};
  int n, m, p = 0;
  vector<array<int, 2>> r;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
      if (a[i][j] == 9) {
        r.push_back({i, j});
        v[i][j] = 1;
        p++;
      }
    }
  }
  for (auto e : r) {
    for (int o = 0; o < 4; o++) {
      int d = o;
      int y = e[0];
      int x = e[1];
      while (1) {
        y += dy[d];
        x += dx[d];
        if (y >= n || y < 0 || x >= m || x < 0) {
          break;
        }
        if (!v[y][x]) {
          v[y][x] = 1;
          p++;
        }
        switch (a[y][x]) {
          case 1:
            if (d % 2) goto E;
            break;
          case 2:
            if (!(d % 2)) goto E;
            break;
          case 3:
            d = (int)(4 + d + pow(-1, d + 1)) % 4;
            break;
          case 4:
            d += pow(-1, d);
        }
      }
    E: {}
    }
  }
  cout << p;
}