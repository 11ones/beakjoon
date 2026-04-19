// 2024년 11월 10일 13:12:45
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  //ios_base::sync_with_stdio(false);
  //cin.tie(nullptr);

  int n, q, x;
  cin >> n >> q;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  for (int i = 0; i < q; i++) {
    cin >> x;
    x--;
    auto t = lower_bound(v.begin(), v.end(), x);
    if (t != v.begin() || x >= *t) {
      for (int j = 0; j <= t - v.begin(); j++) {
        if (*t == x++) {
          t++;
        }
      }
      x--;
    }
    cout << x << " ";
  }
}