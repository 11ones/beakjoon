// 2025년 5월 20일 20:16:54
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  long N, mn = 4e18;
  cin >> N;
  vector<array<long, 2>> v(N);
  for(auto &e : v) cin >> e[0] >> e[1];
  for(int i = 0; i < N; ++i) {
    for(int j = i + 1; j < N; ++j) {
      long mxx = -1e9, mxy = -1e9, mnx = 1e9, mny = 1e9;
      for(int k = 0; k < N; ++k) {
        if(k != i && k != j) {
          mxx = max(mxx, v[k][1]);
          mxy = max(mxy, v[k][0]);
          mnx = min(mnx, v[k][1]);
          mny = min(mny, v[k][0]);
        }
      }
      mn = min(mn, (mxx - mnx + 2) * (mxy - mny + 2));
    }
  }
  cout << mn;
}