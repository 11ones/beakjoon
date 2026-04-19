// 2026년 2월 23일 05:02:44
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, x, y = 0;
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