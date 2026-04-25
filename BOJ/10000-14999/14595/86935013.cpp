// 2024년 11월 27일 22:57:49
// 맞았습니다!!
// 2160KB
// 16ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;
  unordered_map<int, int> a;
  queue<int> q;
  while (m--) {
    int x, y;
    cin >> x >> y;
    for (auto e : a) {
      if (y < e.first || e.second < x) {
        continue;
      } else {
        x = min(x, e.first);
        y = max(y, e.second);
        q.push(e.first);
      }
    }
    while (!q.empty()) {
      a.erase(q.front());
      q.pop();
    }
    a[x] = y;
  }
  int t = n;
  for (auto e : a) {
    t -= e.second - e.first;
  }
  cout << t;
}