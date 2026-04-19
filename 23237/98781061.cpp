// 2025년 9월 22일 18:08:44
// 맞았습니다!!
// 2028KB
// 4ms
#include <bits/stdc++.h>
using namespace std;

int N, i = 1;
vector<int> t;
vector<vector<int>> v;

int run(int x, int d) {
  int c = 0;
  for (int j = x; j < N; ++j) {
    t[j] = 1;

    int y = 0;
    vector<int> u(N);
    u[j] = 1;
    queue<int> q;
    q.push(j);
    while (!q.empty()) {
      int f = q.front();
      q.pop();
      for (int e : v[f]) {
        if (u[e] || !t[e]) continue;
        u[e] = 1;
        q.push(e);
        ++y;
      }
      if (y == d) break;
    }
    if (y == d) ++c;

    c += run(j + 1, d + 1);
    t[j] = 0;
  }
  return c;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  while (1) {
    int c = 0, a, b;
    cin >> N;
    if (!N) break;
    t.clear(), t.resize(N);
    v.clear(), v.resize(N, vector<int>());
    for (int j = 1; j < N; ++j) {
      cin >> a >> b;
      v[a].push_back(b);
      v[b].push_back(a);
    }
    cout << "Case " << i << ": " << run(0, 0) << '\n';
    ++i;
  }
}