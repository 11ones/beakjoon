// 2025년 1월 27일 17:58:30
// 틀렸습니다
// KB
// ms
// https://www.acmicpc.net/problem/5577
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, m = 1e6;
  cin >> n;
  vector<int> v(n);
  for (auto &e : v) cin >> e;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 2; j++) {
      v[i] = 1 + v[i] % 3;
      int f = i - 1, b = i + 1, c = 1, d = v[j], tm = n;
      while (1) {
        while (v[f] == d && f >= 0) {
          f--;
          c++;
        }
        while (v[b] == d && b < n) {
          b++;
          c++;
        }
        if (c < 4) break;
        tm -= c;
        if (v[f] != v[b]) break;
        d = v[f];
        c = 0;
      }
      if (m > tm) {
        m = min(m, tm);
      }
    }
    v[i] = 1 + v[i] % 3;
  }
  cout << m;
}