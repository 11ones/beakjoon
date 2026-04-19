// 2026년 2월 23일 05:03:38
// 맞았습니다!!
// 8360KB
// 36ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  long N, x, y = 0;
  cin >> N;
  map<long, int> m;
  while(N--) {
    cin >> x;
    ++m[x];
  }
  for(auto e : m) {
    if (y < e.second) {
      x = e.first, y = e.second;
    }
  }
  cout << x;
}