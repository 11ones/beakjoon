// 2025년 2월 26일 23:54:42
// 맞았습니다!!
// 8300KB
// 116ms
#include <bits/stdc++.h>
using namespace std;
typedef vector<int> V;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, mx = 0;
  cin >> n;
  vector<int> v(n), t;
  for (auto &e : v) {
    cin >> e;
  }
  for (auto e : v) {
    for (auto f : v) {
      t.push_back(e + f);
    }
  }
  sort(v.begin(), v.end());
  sort(t.begin(), t.end());
  for (auto e : v) {
    for (int i = n - 1; i >= 0; i--) {
      if(e + t[0] > v[i]) break;
      auto x = lower_bound(t.begin(), t.end(), v[i] - e);
      if(v.end() != x && *x == v[i] - e) {
        mx = max(mx, *x + e);
      }
    }
  }
  cout << mx;
}