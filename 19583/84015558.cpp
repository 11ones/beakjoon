// 2024년 9월 18일 18:26:21
// 맞았습니다!!
// 12808KB
// 52ms
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
  for(auto e : f) {
    if(b.find(e) != b.end()) {
      cnt++;
    }
  }
  cout << cnt;
}