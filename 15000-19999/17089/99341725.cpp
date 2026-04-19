// 2025년 10월 12일 01:17:33
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, mn = 1e9;
  cin >> N >> M;
  ++N;
  vector<vector<int>> v(N, vector<int>(N, 0));
  vector<array<int, 2>> c(N);
  vector<int> vst(N, 1e9), f(N);
  for(auto &e : c) {
    cin >> e[0] >> e[1];
    v[e[0]][e[1]] = 1;
    v[e[1]][e[0]] = 1;
    ++f[e[0]], ++f[e[1]];
  }
  for(int i = 1; i < N; ++i) {
    for (auto &e : c) {
      if(v[i][e[0]] + v[i][e[1]] == 2) {
          mn = min(mn, f[i] + f[e[0]] + f[e[1]] - 6);
      }
    }
  }
  cout << (mn > 1e8 ? -1 : mn);
}