// 2024년 10월 15일 23:41:58
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

typedef struct{
  long long f = 1e9;
  vector<int> s{};
}vp;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  while (tc--) {
    int n, m, t, s, g, h;
    cin >> n >> m >> t >> s >> g >> h;
    array<vector<pair<int, int>>, 2001> v{};
    while (m--) {
      int a, b, d;
      cin >> a >> b >> d;
      v[a].push_back({b, d});
      v[b].push_back({a, d});
    }
    vp d[n + 1];
    queue<int> q;
    q.push(s);
    d[s].f = 0;
    while (!q.empty()) {
      int tq = q.front();
      q.pop();
      for (auto e : v[tq]) {
        int ef = e.first;
        int es = e.second;
        if (d[ef].f > d[tq].f + es) {
          d[ef].f = d[tq].f + es;
          q.push(ef);
          d[ef].s.clear();
        }
        if (d[ef].f == d[tq].f + es) {
          d[ef].s.push_back(tq);
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
        for (auto e : d[tr].s) {
          if (!vst[e]) {
            if ((tr == g && e == h) || (e == g && tr == h)) {
              a.push_back(x);
              while (!r.empty()) {
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
    for (auto e : a) {
      cout << e << " ";
    }
    cout << '\n';
  }
}