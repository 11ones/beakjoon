// 2025년 3월 19일 13:18:02
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int add(int a, int p) {
  string s = to_string(a);
  while (s.size() != 4) {
    s = '0' + s;
  }
  s[p] == '9' ? s[p] -= 8 : s[p] += 1;
  return stoi(s);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, m;
  cin >> n >> m;
  vector<array<int, 4>> v(m + 1);
  v[0] = {n, n, n, n};
  for (int i = 1; i <= m; i++) {
    if (i % 2) {
      int tmx = -1;
      for (int j = 0; j < 4; j++) {
        int mx = -1;
        for (int k = 0; k < 4; k++) {
          mx = max(mx, add(v[i - 1][k], j));
        }
        v[i][j] = mx;
        tmx = max(tmx, mx);
      }
      if(i == m) {
        cout << (tmx > n ? "koosaga" : "cubelover");
        return 0;
      }
      continue;
    }
    int tmn = 1e4;
    for (int j = 0; j < 4; j++) {
      int mn = 1e4;
      for (int k = 0; k < 4; k++) {
        mn = min(mn, add(v[i - 1][k], j));
      }
      v[i][j] = mn;
      tmn = min(tmn, mn);
    }
    if(i == m) {
      cout << (tmn > n ? "koosaga" : "cubelover");
      return 0;
    }
  }
  cout << "cubelover";
}