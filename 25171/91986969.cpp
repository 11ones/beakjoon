// 2025년 3월 25일 16:10:15
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  long n, x, y, c = 0;
  cin >> n >> x >> y;
  vector<long> v(n);
  for (auto &e : v) cin >> e;
  for (int af = 0; af < n; ++af) {
    int tx = 0;
    for (int ab = af; ab < n; ++ab) {
      tx += v[ab];
      for (int kf = 0; kf < n; ++kf) {
        if (kf >= af && kf <= ab) kf = ab + 1;
        if (kf >= n) break;
        int ty = 0;
        for (int kb = kf; kb < n; ++kb) {
          if (kb >= af && kb <= ab) kb = ab + 1;
          if (kb >= n) break;
          ty += v[kb];
          if ((y - 1) / tx < (ty - 1) / x) {
            if (kb <= ab)
              c += n - kb - (ab - af + 1);
            else
              c += n - kb;
            break;
          }
        }
        if (kf) ty += v[kf - 1];
      }
    }
  }
  cout << (c ? to_string(c) : "IMPOSSIBLE");
}