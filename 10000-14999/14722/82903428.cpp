// 2024년 8월 24일 00:17:54
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
#define g0 get<0>
#define g1 get<1>
#define g2 get<2>
using namespace std;
typedef tuple<int, int, int> u;

struct cmp {
  bool operator()(u a, u b) { return g0(a) + g1(a) > g0(b) + g1(b); }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  array<array<int, 1000>, 1000> d{}, a;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }
  priority_queue<u, vector<u>, cmp> q;
  if (!a[0][0]) {
    q.push({0, 0, 1});
    d[0][0] = 1;
  } else {
    q.push({0, 0, 0});
  }
  int mx = 0;
  while (!q.empty()) {
    auto t = q.top();
    int y = g0(t);
    int x = g1(t);
    int m = g2(t);
    q.pop();
    if (a[y][x] == m % 3) {
      mx = max(mx, m + 1);
    }
    if (y < n - 1 && (!d[y + 1][x] || d[y][x] >= d[y + 1][x])) {
      if (a[y][x] == m % 3) {
        d[y + 1][x] = m + 1;
        q.push({y + 1, x, m + 1});
      } else {
        d[y + 1][x] = m;
        q.push({y + 1, x, m});
      }
    }
    if (x < n - 1 && (!d[y][x + 1] || d[y][x] >= d[y][x + 1])) {
      if (a[y][x] == m % 3) {
        d[y][x + 1] = m + 1;
        q.push({y, x + 1, m + 1});
      } else {
        d[y][x + 1] = m;
        q.push({y, x + 1, m});
      }
    }
  }
  cout << mx;
}