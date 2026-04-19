// 2026년 3월 3일 16:34:06
// 맞았습니다!!
// 6776KB
// 180ms
#include <bits/stdc++.h>
using namespace std;
int main() {
  cin.tie(0)->sync_with_stdio(0);
  int G, P, x;
  cin >> G >> P;
  map<int, int> m;
  while (P--) {
    cin >> x;
    while (m[x]++) {
      x -= m[x] - 1;
      if (x < 1) {
        cout << m.size();
        return 0;
      }
    }
  }
  cout << m.size();
}