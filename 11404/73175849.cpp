// 2024년 2월 9일 13:02:55
// 맞았습니다!!
// 3288KB
// 104ms
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

int r[100][100];
vector<B> v[100];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    v[a - 1].push_back({c, b - 1});
  }
  
  fill_n(&r[0][0], 100 * 100, 1'000'000'000);
  
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
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (r[i][j] >= 1'000'000'000) {
        cout << "0 ";
      } else {
        cout << r[i][j] << " ";
      }
    }
    cout << '\n';
  }
}