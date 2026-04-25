// 2024년 9월 22일 23:15:35
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, tc;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  array<bool, 15001> a;
  a[0] = 1;
  for (int i = 0; i < n; i++) {
    auto t = a;
    for (int j = 0; j < 15001; j++) {
      if (a[j]) t[j + v[i]] = 1;
      if (a[j] && j > v[i]) t[j - v[i]] = 1;
    }
    for (int j = 0; j < i; j++) {
      t[v[i] - v[j]] = 1;
    }
    a = t;
  }
  cin >> tc;
  for (int o = 0; o < tc; o++) {
    int x;
    cin >> x;
    cout << ( x < 15001 && a[x] ? "Y " : "N ");
  }
}