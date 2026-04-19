// 2025년 10월 30일 01:38:35
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  array<int, 3> d;
  cin >> d[0] >> d[1] >> d[2];
  vector<array<int, 2>> v;
  for(int i = 1; i <= d[2]; ++i) {
    if(!(d[2] % i)) v.push_back({i, d[2] / i});
  }
  int mn = 1e9;
  for(auto e : v) {
    int c = 0;
    auto t = d;
    for(int i = 0; i < 2; ++i) {
      if(t[i] < e[i]) continue;
      while(t[i] > e[i]) {
        ++c;
        t[i] = (t[i] + 1) / 2;
      }
    }
    mn = min(mn, c);
  }
  cout << (mn > 1e8 ? -1 : mn);
}