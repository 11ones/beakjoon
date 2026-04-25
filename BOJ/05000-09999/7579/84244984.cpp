// 2024년 9월 23일 22:54:05
// 틀렸습니다
// KB
// ms
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
  for (int i = 1; i < 10001; i++) {
    if (a[i] != 1e9 && a[i] >= m) {
      cout << i;
      return 0;
    }
  }
}