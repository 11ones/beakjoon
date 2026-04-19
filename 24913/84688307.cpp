// 2024년 10월 3일 15:54:56
// 100점
// 2804KB
// 80ms
#include <bits/stdc++.h>
using namespace std;
typedef long long l;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  l n, q, mx = 0, tot = 0;
  cin >> n >> q;
  vector<l> v(n + 2);
  while (q--) {
    int a, x, y;
    cin >> a >> x >> y;
    if (a == 1) {
      v[y] += x;
      if (y != n + 1) {
        tot += x;
        mx = max(mx, v[y]);
      }
    } else {
      cout << (v[n + 1] + x > mx && v[n + 1] + x > (tot + y - 1) / n + 1 ? "YES\n" : "NO\n");
    }
  }
}