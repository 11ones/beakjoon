// 2025년 2월 2일 23:28:00
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int T;
  cin >> T;
  while (T--) {
    long n, p, q, x, a, b, mn = 1e8, mnp;
    cin >> n >> p >> q;
    map<int, int> m;
    vector<vector<long>> d(p + 1, vector<long>(p + 1, 1e8));
    for(int i = 1; i <= p; i++) {
      d[i][i] = 0;
    }
    while (n--) {
      cin >> x;
      m[x]++;
    }
    for (int i = 0; i < q; i++) {
      cin >> a >> b >> x;
      d[a][b] = min(d[a][b], x);
      d[b][a] = min(d[b][a], x);
    }
    for (int i = 1; i <= p; i++) {
      for (int j = 1; j <= p; j++) {
        for (int k = 1; k <= p; k++) {
          d[j][k] = min(d[j][k], d[j][i] + d[i][k]);
        }
      }
    }
    for (int i = 1; i <= p; i++) {
      long t = 0;
      for (auto e : m) {
        t += pow(d[e.first][i], 2) * e.second;
      }
      if(mn > t) {
        mn = t;
        mnp = i;
      }
    }
    cout << mnp << " " << mn << '\n';
  }
}