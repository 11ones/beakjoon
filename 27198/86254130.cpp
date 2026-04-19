// 2024년 11월 10일 13:31:07
// 맞았습니다!!
// 2412KB
// 52ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, q, x, d;
  cin >> n >> q;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  for (int i = 0; i < q; i++) {
    d = 0;
    cin >> x;
    x--;
    auto t = upper_bound(v.begin(), v.end(), x);
    if (t != v.begin()) {
      d = t - v.begin();
      while (x + d >= *t && d != n) {
        t = upper_bound(v.begin(), v.end(), x + d);
        d = t - v.begin();
      }
    }
    cout << x + d << " ";
  }
}