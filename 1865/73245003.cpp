// 2024년 2월 11일 11:55:29
// 틀렸습니다
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

int r[500];
vector<B> v[500];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tc;
  cin >> tc;
  for (int g = 0; g < tc; g++) {
    int n, m, w;
    cin >> n >> m >> w;
    for (int i = 0; i < m; i++) {
      int a, b, c;
      cin >> a >> b >> c;
      v[a - 1].push_back({c, b - 1});
      v[b - 1].push_back({c, a - 1});
    }
    for (int i = 0; i < w; i++) {
      int a, b, c;
      cin >> a >> b >> c;
      v[a - 1].push_back({-c, b - 1});
    }

    bool check = 0;
    fill_n(&r[0], 500, 1'000'000'000);
    r[0] = 0;
    priority_queue<B, vector<B>, cmp> q;
    for (B e : v[0]) {
      if (r[e.b] > e.c) {
        q.push(e);
        r[e.b] = e.c;
      }
    }
    while (!q.empty()) {
      int t = q.top().b;
      q.pop();
      for (B e : v[t]) {
        if (r[e.b] < 0) {
          check = 1;
          break;
        }
        if (r[e.b] > r[t] + e.c) {
          r[e.b] = r[t] + e.c;
          q.push({r[e.b], e.b});
        }
      }
    }
    if (check) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
}