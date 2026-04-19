// 2026년 2월 23일 03:44:24
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int H, W, c = 0;
  cin >> H >> W;
  vector<int> v(W), u, w;
  for(auto &e : v) cin >> e;
  u = w = v;
  for(int i = 1; i < W; ++i) {
    u[i] = max(u[i], u[i - 1]);
    w[W - i - 1] = max(w[W - i - 1], w[W - i]); 
  }
  for(int i = 0; i < W; ++i) {
    c += min(u[i], w[i]) - v[i];
  }
  cout << c;
}