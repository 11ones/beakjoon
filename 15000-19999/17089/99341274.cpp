// 2025년 10월 12일 00:47:40
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, a, b, mn = 1e9;
  cin >> N >> M;
  ++N;
  vector<vector<int>> v(N, vector<int>());
  vector<int> vst(N, 1e9), f(N);
  while (M--) {
    cin >> a >> b;
    v[a].push_back(b);
    v[b].push_back(a);
    ++f[a], ++f[b];
  }
  queue<array<int, 2>> q;
  q.push({1, -1});
  vst[1] = 0;
  while (!q.empty()) {
    auto [t, u] = q.front();
    q.pop();
    for (int e : v[t]) {
      if (vst[e] == vst[t]) {
        mn = min(mn, f[e] + f[t] + f[u] - 6);
      }
      if (vst[e] > vst[t] + 1) {
        vst[e] = vst[t] + 1;
        q.push({e, t});
      }
    }
  }
  cout << (mn > 1e8 ? -1 : mn);
}