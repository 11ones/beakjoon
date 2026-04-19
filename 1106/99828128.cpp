// 2025년 10월 30일 15:06:04
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int C, N;
  cin >> C >> N;
  vector<array<int, 2>> v(N);
  for(auto &e : v) cin >> e[0] >> e[1];
  vector<int> d(C + 101, 1e9);
  d[0] = 0;
  for(auto &e : v) {
    for(int i = 0; i < C; ++i) {
      if(d[i] + e[0] < d[i + e[1]]) d[i + e[1]] = d[i] + e[0];
    }
  }
  cout << *min_element(d.begin() + C, d.end());
}