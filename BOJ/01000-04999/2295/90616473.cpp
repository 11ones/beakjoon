// 2025년 2월 26일 23:44:37
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;
typedef vector<int> V;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, mx = 0;
  cin >> n;
  vector<int> v(n);
  for (auto &e : v) {
    cin >> e;
  }
  sort(v.begin(), v.end());
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
        int x = v[i] + v[j] + v[k];
        auto t = lower_bound(v.begin() + i + 1, v.end(), x);
        if (v.end() == t) break;
        if (*t == x) mx = max(mx, x);
      }
    }
  }
  cout << mx;
}