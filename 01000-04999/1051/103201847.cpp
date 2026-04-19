// 2026년 2월 23일 04:04:15
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, M, x = 0;
  cin >> N >> M;
  vector<vector<char>> v(N, vector<char>(M));
  for (auto &e : v) for (auto &f : e) cin >> f;
  for (int o = 1; o < min(N, M); ++o) {
    for (int i = 0; i < N - o; ++i) {
      for(int j = 0; j < M - o; ++j) {
        if(v[i][j] == v[i + o][j] && v[i][j] == v[i][j + o] && v[i][j] == v[i + o][j + o]) x = o;
      }
    }
  }
  cout << ++x * x;
}