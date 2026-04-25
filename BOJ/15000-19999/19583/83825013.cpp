// 2024년 9월 12일 23:25:24
// 맞았습니다!!
// 21564KB
// 164ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  //ios_base::sync_with_stdio(false);
  //cin.tie(nullptr);

  string s, e, q, x, y;
  cin >> s >> e >> q;
  vector<pair<string, string>> v;
  vector<string> f, b;
  while(cin >> x) {
    cin >> y;
    v.push_back({x, y});
  }
  sort(v.begin(), v.end());
  for(auto t : v) {
    if(t.first <= s)
      f.push_back(t.second);
    if(t.first >= e && t.first <= q)
      b.push_back(t.second);
  }
  int cnt = 0;
  sort(f.begin(), f.end());
  sort(b.begin(), b.end());
  f.erase(unique(f.begin(), f.end()), f.end());
  b.erase(unique(b.begin(), b.end()), b.end());
  auto fp = f.begin();
  auto bp = b.begin();
  while(fp != f.end() && bp != b.end()) {
    if(*fp == *bp) {
      cnt++;
      fp++;
      bp++;
    } else if(*fp > *bp) {
      bp++;
    } else {
      fp++;
    }
  }
  cout << cnt;
}