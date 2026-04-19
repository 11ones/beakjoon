// 2026년 2월 23일 06:02:46
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N;
  cin >> N;
  vector<array<int, 2>> v(N);
  for(auto &e : v) cin >> e[0] >> e[1];
  v.push_back(v[0]);
  int c = 0;
  for(int i = 0; i < N; ++i) {
    c += abs(v[i][0] - v[i + 1][0]) + abs(v[i][1] - v[i + 1][1]);
  }
  cout << c;
}