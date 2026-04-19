// 2024년 12월 15일 17:30:58
// 맞았습니다!!
// 9964KB
// 52ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int dx[4] = {0, 1, 0, -1};
  int dy[4] = {1, 0, -1, 0};
  map<char, int> p{{'D', 0}, {'R', 1}, {'U', 2}, {'L', 3}};

  int n, m, cnt = 0;
  cin >> n >> m;
  vector<vector<int>> v(n, vector<int>(m, 0));
  auto d(v);
  char c;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> c;
      v[i][j] = p[c];
    }
  }
  vector<pair<int, int>> t;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (!d[i][j]) {
        int y = i;
        int x = j;
        while (d[y][x] != 2) {
          if (d[y][x] == 1) {
            cnt++;
            break;
          }
          d[y][x] = 1;
          t.push_back({y, x});
          if (v[y][x] % 2) {
            x += dx[v[y][x]];
          } else {
            y += dy[v[y][x]];
          }
        }
      }
      for (auto e : t) {
        d[e.first][e.second] = 2;
      }
      t.clear();
    }
  }
  cout << cnt;
}