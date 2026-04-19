// 2026년 2월 23일 05:30:55
// 맞았습니다!!
// 2156KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, M, c = 0;
  cin >> N >> M;
  vector<vector<char>> v(N, vector<char>(M));
  for (auto &e : v)
    for (auto &f : e) cin >> f;
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < M; ++j) {
      if (v[i][j] == '#') {
        queue<array<int, 2>> q;
        q.push({i, j});
        v[i][j] = '.';
        while (!q.empty()) {
          auto t = q.front();
          q.pop();
          for (int k = 0; k < 4; ++k) {
            int ty = t[0] + dy[k];
            int tx = t[1] + dx[k];
            if (tx < 0 || tx >= M || ty < 0 || ty >= N || v[ty][tx] != '#')
              continue;
            v[ty][tx] = '.';
            q.push({ty, tx});
          }
        }
        ++c;
      }
    }
  }
  cout << c;
}