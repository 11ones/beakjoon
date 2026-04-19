// 2025년 3월 12일 16:25:48
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, c = 0;
  cin >> n >> k;
  vector<int> v(n);
  for (auto &e : v) cin >> e;
  for (int i = 0;; i++) {
    int mxp, mx = 0;
    for (int j = k; j < n; j++) {
      if (mx < v[j] - v[j - k]) {
        mx = v[j] - v[j - k];
        mxp = j;
      }
    }
    if (!mx) {
      cout << c << " " << i;
      return 0;
    }
    c += v[mxp] - v[mxp - k];
    v[mxp] = v[mxp - k];
    sort(v.begin(), v.end());
  }
}