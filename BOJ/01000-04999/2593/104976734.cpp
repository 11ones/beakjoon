// 2026년 4월 13일 02:38:25
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, M, A, B;
  cin >> N >> M;
  vector<array<int, 2>> v(M);
  vector<int> pa, pb;
  vector<vector<int>> d(M, vector<int>());
  for (auto &[a, b] : v) cin >> a >> b;
  cin >> A >> B;
  for (int i = 0; i < M; ++i) {
    auto [a, b] = v[i];
    if (A >= a && !((A - a) % b) && B >= a && !((B - a) % b)) {
      cout << "1\n" << i + 1;
      return 0;
    }
    if (A >= a && !((A - a) % b)) pa.push_back(i);
    if (B >= a && !((B - a) % b)) pb.push_back(i);
  }
  for (int i = 0; i < M; ++i) {
    for (int j = i + 1; j < M; ++j) {
      int a = v[i][0];
      int b = v[j][0];
      while (a <= N && b <= N) {
        if (a == b) {
          d[i].push_back(j);
          d[j].push_back(i);
          break;
        }
        a > b ? b += v[j][1] : a += v[i][1];

      }
    }
  }
  vector<int> vs(M, 1e9);
  queue<int> q;
  for (auto e : pa) {
    q.push(e);
    vs[e] = 0;
  }
  while (!q.empty()) {
    int t = q.front();
    q.pop();
    for (auto e : d[t]) {
      if (vs[e] > vs[t] + 1) {
        q.push(e);
        vs[e] = vs[t] + 1;
      }
    }
  }
  int mn = 1e8, p = -1;
  for (auto e : pb) {
    if (vs[e] < mn) mn = vs[e], p = e;
  }
  if (p == -1) {
    cout << -1;
    return 0;
  }
  cout << mn + 1 << '\n';
  vector<int> t = {p};
  while (mn--) {
    for (auto e : d[p]) {
      if(vs[e] == mn) {
        t.push_back(e);
        break;
      }
    }
  }
  for (int i = t.size() - 1; i >= 0; --i) {
    cout << t[i] + 1 << '\n';
  }
}