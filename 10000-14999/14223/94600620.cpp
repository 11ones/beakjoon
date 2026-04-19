// 2025년 5월 21일 18:48:21
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  long N, mn = 9e18;
  cin >> N;
  vector<array<long, 2>> v(N);
  for(auto &e : v) cin >> e[0] >> e[1];
  for(int i = 0; i < N; ++i) {
    for(int j = i + 1; j < N; ++j) {
      long mxx = -1e9, mxy = -1e9, mnx = 1e9, mny = 1e9;
      for(int k = 0; k < N; ++k) {
        if(k != i && k != j) {
          mxx = max(mxx, v[k][0]);
          mxy = max(mxy, v[k][1]);
          mnx = min(mnx, v[k][0]);
          mny = min(mny, v[k][1]);
        }
      }
      long tmn = max(mxx - mnx + 2, mxy - mny + 2);
      mn = min(mn, tmn * tmn);
    }
  }
  cout << mn;
}