// 2024년 9월 23일 22:57:30
// 맞았습니다!!
// 2056KB
// 0ms
#include <bits/stdc++.h>
using namespace std;
typedef long long l;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m, z = 0;
  cin >> n >> m;
  vector<pair<l, l>> p(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i].first;
  }
  for (int i = 0; i < n; i++) {
    cin >> p[i].second;
  }
  array<l, 10001> a{};
  for (auto e : p) {
    auto t = a;
    for (int i = e.second; i < 10001; i++) {
      t[i] = max(a[i - e.second] + e.first, a[i]);
    }
    a = t;
  }
  for (int i = 0; i < 10001; i++) {
    if (a[i] >= m) {
      cout << i;
      return 0;
    }
  }
}