// 2026년 2월 23일 04:25:54
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N;
  cin >> N;
  vector<int> v(N), u;
  for(auto &e : v) cin >> e;
  for(int i = N - 1; i >= 0; --i) {
    u.insert(u.begin() + v[i], i + 1);
  }
  for(auto e : u) cout << e << " ";
}