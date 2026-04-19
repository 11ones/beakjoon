// 2025년 10월 2일 14:18:57
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  array<int, 3> v;
  int K, c = 0, x, y;
  string S, s = "URX";
  cin >> K >> S >> K;
  for (auto e : S) {
    for(int i = 0; i < 3; ++i) {
      if(e == s[i]) ++v[i];
    }
  }
  while (K--) {
    cin >> x >> y;
    int t = min({x, y, v[2]});
    x -= t, y -= t;
    if (min(x, v[1]) == x && min(y, v[0]) == y) ++c;
  }
  cout << c;
}