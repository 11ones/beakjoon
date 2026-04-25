// 2024년 2월 10일 12:18:02
// 시간 초과
// KB
// ms
#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct B {
  int c;
  int b;
};

struct cmp {
  bool operator()(B a, B b) { return a.c < b.c; }
};

int r[1000][1000];
vector<B> v[1000];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m, x;
  cin >> n >> m >> x;
  x--;
  for (int i = 0; i < m; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    v[a - 1].push_back({c, b - 1});
  }

  fill_n(&r[0][0], 1000 * 1000, 1'000'000'000);

  for (int o = 0; o < n; o++) {
    r[o][o] = 0;
    priority_queue<B, vector<B>, cmp> q;
    for (B e : v[o]) {
      if (r[o][e.b] > e.c) {
        q.push(e);
        r[o][e.b] = e.c;
      }
    }
    while (!q.empty()) {
      int t = q.top().b;
      q.pop();
      for (B e : v[t]) {
        if (r[o][e.b] > r[o][t] + e.c) {
          r[o][e.b] = r[o][t] + e.c;
          q.push({r[o][e.b], e.b});
        }
      }
    }
  }

  int mx = 0;
  for (int i = 0; i < n; i++) {
    if (mx < r[i][x] + r[x][i]) {
      mx = r[i][x] + r[x][i];
    }
  }
  cout << mx;
}