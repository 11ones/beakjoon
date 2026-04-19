// 2024년 10월 14일 23:18:26
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  while (tc--) {
    int n, m, t, s, g, h;
    cin >> n >> m >> t >> s >> g >> h;
    vector<pair<int, int>> *v = new vector<pair<int, int>>[n + 1];
    while (m--) {
      int a, b, d;
      cin >> a >> b >> d;
      v[a].push_back({b, d});
      v[b].push_back({a, d});
    }
    pair<int, vector<int>> *d = new pair<int, vector<int>>[n + 1];
    for (int i = 0; i <= n; i++) {
      d[i].first = 1e9;
    }
    queue<pair<int, int>> q;
    q.push({s, s});
    d[s].first = 0;
    while (!q.empty()) {
      int qf = q.front().first;
      int qs = q.front().second;
      q.pop();
      for (auto e : v[qf]) {
        int ef = e.first;
        int es = e.second;
        if (d[ef].first > d[qf].first + es) {
          d[ef].first = d[qf].first + es;
          q.push({ef, qf});
          d[ef].second.clear();
        }
        if (d[ef].first == d[qf].first + es) {
          d[ef].second.push_back(qf);
        }
      }
    }
    vector<int> a;
    while (t--) {
      int x;
      cin >> x;
      vector<bool> vst(n + 1);
      queue<int> r;
      r.push(x);
      vst[x] = 1;
      while (!r.empty()) {
        int tr = r.front();
        r.pop();
        for (auto e : d[tr].second) {
          if (!vst[e]) {
            if(tr == g && e == h || e == g && tr == h ) {
              a.push_back(x);
              while(!r.empty()) {
                r.pop();
              }
              break;
            }
            vst[e] = 1;
            r.push(e);
          }
        }
      }
    }
    sort(a.begin(), a.end());
    for(auto e : a) {
      cout << e << " ";
    }
    cout << '\n';
  }
}