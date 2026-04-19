// 2024년 12월 28일 13:44:33
// 맞았습니다!!
// 2020KB
// 140ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;
  while (T--) {
    int n, m, x, y, z, s = 0, c = 0;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(n, 0));
    while (m--) {
      cin >> z >> x >> y;
      v[x - 1][y - 1] += z;
    }
    vector<int> r(n);
    for (int i = 0; i < n; i++) {
      r[i] = i;
    }
    do {
      int t = 0;
      for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
          t += v[r[i]][r[j]];
        }
      }
      if (s == t) c++;
      if (s < t) {
        s = t;
        c = 1;
      }
    } while (next_permutation(r.begin(), r.end()));
    cout << s << " " << c << '\n';
  }
}