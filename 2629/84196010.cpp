// 2024년 9월 22일 23:41:22
// 맞았습니다!!
// 2020KB
// 0ms
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
  array<bool, 30002> a{};
  for (int i = 0; i < n; i++) {
    auto t = a;
    for (int j = 0; j < 30002; j++) {
      if (a[j]) {
        t[j + v[i]] = 1;
        t[j - v[i]] = 1;
      }
    }
    t[v[i] + 15001] = 1;
    t[15001 - v[i]] = 1;
    a = t;
  }
  cin >> tc;
  for (int o = 0; o < tc; o++) {
    int x;
    cin >> x;
    cout << (x < 15001 && a[x + 15001] ? "Y " : "N ");
  }
}