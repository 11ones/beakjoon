// 2025년 5월 29일 14:22:23
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K, S, X, Y;
  cin >> N >> K;
  vector<vector<int>> v(N, vector<int>(N));
  int dx[4] = {0, 1, 0, -1};
  int dy[4] = {1, 0, -1, 0};
  for (auto &e : v) {
    for (int &f : e) {
      cin >> f;
    }
  }
  cin >> S >> X >> Y;
  --X, --Y;
  for (int i = 0; i < S; ++i) {
    auto t = v;
    for (int j = 0; j < N; ++j) {
      for (int k = 0; k < N; ++k) {
        if (v[j][k]) continue;
        int mn = K + 1;
        for (int l = 0; l < 4; ++l) {
          int ty = j + dy[l];
          int tx = k + dx[l];
          if (tx < 0 || tx >= N || ty < 0 || ty >= N || !v[ty][tx]) continue;
          mn = min(mn, v[ty][tx]);
        }
        if (mn != K + 1) t[j][k] = mn;
      }
    }
    v = t;
  }
  cout << v[X][Y];
}