// 2026년 1월 28일 03:56:10
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;
int main() {
  cin.tie(0)->sync_with_stdio(0);
  while(1) {
    int x, s = 0, e = 51, t = 0;
    cin >> x;
    if(x == 0) break;
    if(x % 2) ++t;
    x /= 2;
    while(++t) {
      int m = (s + e) / 2;
      if(m == x) {
        cout << t << "\n";
        break;
      }
      if(m > x) {
        e = m - 1;
      } else {
        s = m + 1;
      }
    }
  }
}