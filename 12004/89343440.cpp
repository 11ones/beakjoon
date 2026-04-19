// 2025년 1월 30일 23:45:43
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, m, a, b;
  cin >> n >> m;
  vector<set<int>> v(n + 1);
  for (int i = 0; i < m; i++) {
    cin >> a >> b;
    v[a].insert(b);
    v[b].insert(a);
  }
  set<int> t;
  vector<int> r(n), s(n);
  for(auto &e : s) cin >> e;
  for (int i = n - 1; i >= 0; i--) {
    auto x = t.begin();
    auto y = v[s[i]].begin();
    if(t.empty()) {
      t.insert(s[i]);
      r[i] = 1;
      continue;
    }
    while (x != t.end() && y != v[s[i]].end()) {
      if (*x == *y) {
        r[i] = 1;
        break;
      }
      *x < *y ? x++ : y++;
    }
    t.insert(s[i]);
  }
  for(auto e : r) cout << (e ? "YES\n" : "NO\n");
}