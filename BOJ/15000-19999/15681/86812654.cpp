// 2024년 11월 24일 19:42:31
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, r, q;
  cin >> n >> r >> q;
  vector<int> *v = new vector<int>[n + 1];
  vector<int> a(n + 1);
  for (int i = 0; i < n - 1; i++) {
    int x, y;
    cin >> x >> y;
    v[x].push_back(y);
    v[y].push_back(x);
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