// 2026년 2월 8일 18:50:24
// 맞았습니다!!
// 2300KB
// 0ms
#include <bits/stdc++.h>
using namespace std;
int main() {
  cin.tie(0)->sync_with_stdio(0);
  int a, b, N, M, x, y;
  cin >> a >> b >> N >> M;
  vector<vector<int>> v(N + 1, vector<int>());
  vector<int> V(N + 1, 1e9);
  V[a] = 0;
  while(M--) {
    cin >> x >> y;
    v[x].push_back(y);
    v[y].push_back(x);
  }
  queue<int> q;
  q.push(a);
  while(q.size()) {
    x = q.front();
    q.pop();
    for(auto e : v[x]) {
      if(V[x] + 1 < V[e]) {
        V[e] = V[x] + 1;
        q.push(e);
      }
    }
  }
  cout << (V[b] > 1e8 ? -1 : V[b]);
}