// 2026년 4월 10일 05:05:04
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, M;
  cin >> N >> M;
  vector<string> u(N), r;
  map<string, int> m;
  vector<set<int>> v(N);
  set<int> s;
  for (int i = 0; i < N; ++i) {
    cin >> u[i];
    m[u[i]] = i;
    s.insert(i);
  }
  string s1, s2;
  while (M--) {
    cin >> s1 >> s2;
    auto &a = m[s1];
    auto &b = m[s2];
    v[a].insert(b);
    v[b].insert(a);
    if (v[a].size() > 2 || v[b].size() > 2) {
      cout << "EI SAA";
      return 0;
    }
  }
  for (int i = 0; i < N; ++i) {
    if (s.find(i) != s.end()) {
      r.push_back(u[i]);
      s.erase(i);
      queue<array<int, 2>> q;
      q.push({i, i});
      while (!q.empty()) {
        auto a = q.front();
        q.pop();
        for (auto e : v[a[0]]) {
          if (e == a[1]) continue;
          if (s.find(e) != s.end()) {
            q.push({e, a[0]});
            r.push_back(u[e]);
            s.erase(e);
          } else {
            cout << "EI SAA";
            return 0;
          }
        }
      }
    }
  }
  cout << "SAAB\n";
  for (auto &e : r) cout << e << " ";
}