// 2024년 12월 11일 23:32:16
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    vector<int> v(n), t(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
      if (v[i] % 2) v[i]++;
    }
    for (int i = 0;; i++) {
      for (auto e : v) {
        if (e != v[0]) goto E;
      }
      cout << i << '\n';
      break;
    E:
      t[0] = v[0] / 2 + v[n - 1] / 2;
      if (t[0] % 2) t[0]++;
      for (int i = 1; i < n; i++) {
        t[i] = v[i] / 2 + v[i - 1] / 2;
        if (t[i] % 2) t[i]++;
      }
      v = t;
    }
  }
}