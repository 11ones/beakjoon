// 2024년 9월 12일 23:27:18
// 맞았습니다!!
// 10300KB
// 48ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string s, e, q, x, y;
  cin >> s >> e >> q;
  vector<string> f, b;
  while(cin >> x) {
    cin >> y;
    if(x <= s)
      f.push_back(y);
    if(x >= e && x <= q)
      b.push_back(y);
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