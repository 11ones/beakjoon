// 2025년 1월 30일 23:24:43
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int f(int x, vector<int> d) {
  return x == d[x] ? x : d[x] = f(d[x], d);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, m, a, b, x = 0, c;
  cin >> n >> m;
  vector<vector<int>> v(n + 1);
  for(int i = 0; i < m; i++) {
    cin >> a >> b;
    v[a].push_back(b);
    v[b].push_back(a);
  }
  vector<int> t(n + 1);
  for(int o = 0; o < n; o++) {
    c = o + 1;
    vector<int> d(n + 1);
    for(int i = 1; i <= n; i++) {
      d[i] = i;
    }
    queue<int> q;
    for(int i = 1; i <= n; i++) {
      if(!t[i]) {
        a = f(i, d);
        for(auto e : v[i]) {
          if(t[e]) continue;
          b = f(e, d);
          if(a != b) {
            d[b] = a;
            c++;
          }
        }
      }
    }
    cout << (c == n ? "YES\n" : "NO\n");
    cin >> x;
    t[x] = 1;
  }
}