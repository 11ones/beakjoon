// 2024년 10월 13일 14:14:40
// 맞았습니다!!
// 3592KB
// 168ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n;
  vector<int> v(n), s;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  s = v;
  sort(s.begin(), s.end());
  cin >> m;
  while (m--) {
    int x, y;
    cin >> x >> y;
    swap(v[x], v[y]);
    if (n == 1) {
      cout << "0 ";
      continue;
    }
    if (n == 2) {
      cout << (v[0] > v[1] ? 1 : 0) << ' ';
      continue;
    }
    bool chk = 1;
    for (int i = 0; i < n; i++) {
      if (v[i] != s[i]) {
        chk = 0;
        break;
      }
    }
    cout << (chk ? 0 : -1) << ' ';
  }
}