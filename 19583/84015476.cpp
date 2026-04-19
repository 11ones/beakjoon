// 2024년 9월 18일 18:24:15
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string s, e, q, x, y;
  cin >> s >> e >> q;
  unordered_set<string> f, b;
  while(cin >> x) {
    cin >> y;
    if(x <= s)
      f.insert(y);
    if(x >= e && x <= q)
      b.insert(y);
  }
  int cnt = 0;
  auto fp = f.begin(), bp = b.begin();
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