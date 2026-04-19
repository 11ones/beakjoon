// 2026년 2월 23일 05:23:57
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, M, c = 0;
  cin >> N >> M;
  map<char, array<int, 2>> m = {{'-', {0, 1}}, {'|', {1, 0}}};
  vector<vector<char>> v(N, vector<char>(M));
  for(auto &e : v) for(auto &f : e) cin >> f;
  for(int i = 0; i < N; ++i) {
    for(int j = 0; j < M; ++j) {
      char t = v[i][j];
      if(t != 'x') {
        int ty = i, tx = j;
        while(ty < N && tx < M && t == v[ty][tx]) {
          v[ty][tx] = 'x';
          ty += m[t][0], tx += m[t][1];
        }
        ++c;
      }
    }
  }
  cout << c;
}