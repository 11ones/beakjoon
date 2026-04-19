// 2026년 3월 30일 16:26:30
// 100점
// 250200KB
// 376ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  long H, W, c = 0;
  cin >> H >> W;
  vector<vector<char>> v(H, vector<char>(W));
  vector<vector<long>> O(H, vector<long>(W)), I;
  I = O;
  vector<array<long, 2>> J;
  for (int i = 0; i < H; ++i) {
    for (int j = 0; j < W; ++j) {
      cin >> v[i][j];
      if (v[i][j] == 'J')
        J.push_back({i, j});
      O[i][j] = (j ? O[i][j - 1] : 0) + (v[i][j] == 'O' ? 1 : 0);
      I[i][j] = (i ? I[i - 1][j] : 0) + (v[i][j] == 'I' ? 1 : 0);
    }
  }
  for (auto &e : J) {
    c += (O[e[0]][W - 1] - O[e[0]][e[1]]) * (I[H - 1][e[1]] - I[e[0]][e[1]]);
  }
  cout << c;
}