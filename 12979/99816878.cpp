// 2025년 10월 30일 01:35:58
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int W, H, A;
  cin >> W >> H >> A;
  vector<array<int, 2>> v;
  for(int i = 1; i <= A; ++i) {
    if(!(A % i)) v.push_back({i, A / i});
  }
  int mn = 1e9;
  for(auto e : v) {
    int c = 0;
    int tw = W;
    int th = H;
    if(tw < e[0] || th < e[1]) continue;
    while(tw > e[0]) {
      ++c;
      tw = (tw + 1) / 2;
    }
    while(th > e[1]) {
      ++c;
      th = (th + 1) / 2;
    }
    mn = min(mn, c);
  }
  cout << (mn > 1e8 ? -1 : mn);
}