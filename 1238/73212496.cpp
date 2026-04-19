// 2024년 2월 10일 12:26:45
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

int r[1000];
vector<B> v[1000];
int rr[1000];
vector<B> rv[1000];

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
    rv[b - 1].push_back({c, a - 1});
  }

  fill_n(&r[0], 1000, 1'000'000'000);
  fill_n(&rr[0], 1000, 1'0000'000'000);

  priority_queue<B, vector<B>, cmp> q;
  for (B e : v[x]) {
    if (r[e.b] > e.c) {
      q.push(e);
      r[e.b] = e.c;
    }
  }
  while (!q.empty()) {
    int t = q.top().b;
    q.pop();
    for (B e : v[t]) {
      if (r[e.b] > r[t] + e.c) {
        r[e.b] = r[t] + e.c;
        q.push({r[e.b], e.b});
      }
    }
  }
  for (B e : rv[x]) {
    if (rr[e.b] > e.c) {
      q.push(e);
      rr[e.b] = e.c;
    }
  }
  while (!q.empty()) {
    int t = q.top().b;
    q.pop();
    for (B e : rv[t]) {
      if (rr[e.b] > rr[t] + e.c) {
        rr[e.b] = rr[t] + e.c;
        q.push({rr[e.b], e.b});
      }
    }
  }

  int mx = 0;
  for (int i = 0; i < n; i++) {
    if (mx < r[i] + rr[i]) {
      mx = r[i] + rr[i];
    }
  }
  cout << mx;
}