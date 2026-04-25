// 2024년 10월 15일 23:53:36
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

typedef long long l;
typedef pair<l, l> p;
typedef struct {
  l f = 1e9;
  vector<l> s{};
} vp;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  while (tc--) {
    int n, m, t, s, g, h;
    cin >> n >> m >> t >> s >> g >> h;
    array<vector<p>, 2001> v{};
    while (m--) {
      int a, b, d;
      cin >> a >> b >> d;
      v[a].push_back({b, d});
      v[b].push_back({a, d});
    }
    vp d[n + 1];
    priority_queue<p, vector<p>, greater<p>> q;
    q.push({0, s});
    d[s].f = 0;
    while (!q.empty()) {
      l tq = q.top().second;
      q.pop();
      for (auto e : v[tq]) {
        l ef = e.first;
        l es = e.second;
        if (d[ef].f > d[tq].f + es) {
          d[ef].f = d[tq].f + es;
          q.push({d[ef].f, ef});
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