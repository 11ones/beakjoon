// 2026년 3월 1일 21:04:50
// 맞았습니다!!
// 8192KB
// 52ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, M, x, y;
  cin >> N >> M;
  vector<vector<int>> v(N, vector<int>());
  vector<int> u(N, 1e7);
  u[0] = 0;
  while (M--) {
    cin >> x >> y;
    v[--x].push_back(--y);
  }
  queue<int> q;
  q.push(0);
  while(!q.empty()) {
    int t = q.front();
    q.pop();
    for(int e : v[t]) {
      if(u[e] > u[t] + 1) {
        u[e] = u[t] + 1;
        q.push(e);
      }
    }
  }
  cout << (u[N - 1] > 1e6 ? -1 : u[N - 1]);
}