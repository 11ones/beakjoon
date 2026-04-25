// 2024년 10월 13일 14:46:31
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m, p;
  cin >> n >> m >> p;
  vector<pair<int, int>> *v = new vector<pair<int, int>>[n + 1];
  while (m--) {
    int a, b, c;
    cin >> a >> b >> c;
    v[a].push_back({b, c});
    v[b].push_back({a, c});
  }
  array<array<int, 101>, 101> d{};
  fill(&d[0][0], &d[n][n + 1], 1e7);
  for (int i = 1; i <= n; i++) {
    queue<int> q;
    q.push(i);
    d[i][i] = 0;
    while (!q.empty()) {
      int t = q.front();
      q.pop();
      for (auto e : v[t]) {
        int ef = e.first;
        int es = e.second;
        if(d[i][ef] > d[i][t] + es) {
          d[i][ef] = d[i][t] + es;
          q.push(ef);
        }
      }
    }
  }
  while(p--) {
    int a, b;
    cin >> a >> b;
    cout << d[a][b] << '\n';
  }
}