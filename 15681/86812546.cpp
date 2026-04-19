// 2024년 11월 24일 19:39:37
// 런타임 에러 (Segfault)
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, r, q;
  vector<int> *v = new vector<int>[n + 1];
  vector<int> a(n + 1);
  cin >> n >> r >> q;
  for (int i = 0; i < n - 1; i++) {
    int a, b;
    cin >> a >> b;
    v[a].push_back(b);
    v[b].push_back(a);
  }
  queue<int> u;
  for (int i = 1; i <= n; i++) {
    if (i != r && v[i].size() == 1) {
      u.push(i);
      a[i] = 1;
    }
  }
  while (!u.empty()) {
    int x = u.front();
    u.pop();
    for (auto e : v[x]) {
      if (!a[e]) {
        int t = 1;
        for (auto ee : v[e]) {
          t += a[ee];
        }
        a[e] = t;
        u.push(e);
      }
    }
  }
  while (q--) {
    int x;
    cin >> x;
    cout << a[x] << '\n';
  }
}