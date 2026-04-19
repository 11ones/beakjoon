// 2026년 2월 23일 05:42:04
// 메모리 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int dx[2] = {1, 0};
  int dy[2] = {0, 1};
  int N;
  cin >> N;
  vector<vector<int>> v(N, vector<int>(N));
  for(auto &e : v) for (auto &f : e) cin >> f;
  queue<array<int, 2>> q;
  q.push({0, 0});
  while(!q.empty()) {
    auto t = q.front();
    q.pop();
    for(int i = 0; i < 2; ++i) {
      int ty = t[0] + dy[i] * v[t[0]][t[1]];
      int tx = t[1] + dx[i] * v[t[0]][t[1]];
      if(ty >= N || tx >= N) continue;
      if(v[ty][tx] == -1) {
        cout << "HaruHaru";
        return 0;
      }
      q.push({ty, tx});
    }
  }
  cout << "Hing";
}