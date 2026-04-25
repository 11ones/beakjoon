#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int Q, x, y, c = 0;
  cin >> Q;
  map<int, int> m;
  queue<int> q;
  while (Q--) {
    cin >> x >> y;
    if (--x) {
      for (auto &e : m)
        if (e.first <= y) {
          c -= e.second;
          q.push(e.first);
        } else
          break;
      while (!q.empty()) {
        m.erase(q.front());
        q.pop();
      }
    } else {
      ++m[y];
      ++c;
    }
    cout << c << '\n';
  }
}