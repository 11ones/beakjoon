// 2026년 2월 23일 05:43:19
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int dx[2] = {1, 0};
  int dy[2] = {0, 1};
  int N;
  cin >> N;
  vector<vector<int>> v(N, vector<int>(N));
  auto u = v;
  for(auto &e : v) for (auto &f : e) cin >> f;
  queue<array<int, 2>> q;
  q.push({0, 0});
  while(!q.empty()) {
    auto t = q.front();
    q.pop();
    for(int i = 0; i < 2; ++i) {
      int ty = t[0] + dy[i] * v[t[0]][t[1]];
      int tx = t[1] + dx[i] * v[t[0]][t[1]];
      if(ty >= N || tx >= N || u[ty][tx]) continue;
      if(v[ty][tx] == -1) {
        cout << "HaruHaru";
        return 0;
      }
      u[ty][tx] = 1;
      q.push({ty, tx});
    }
  }
  cout << "Hing";
}