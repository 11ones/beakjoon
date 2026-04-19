// 2025년 3월 14일 14:47:23
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int tc, n, m, x, c;
  cin >> tc;
  while (tc--) {
    c = 0;
    map<int, int> p;
    auto t = p.rbegin();
    cin >> n >> m;
    queue<array<int, 2>> q;
    for (int i = 0; i < n; ++i) {
      cin >> x;
      p[x]++;
      q.push({x, i});
    }
    while (1) {
      if (q.front()[0] < (*t).first) {
        q.push(q.front());
      } else {
        c++;
        if (q.front()[1] == m) {
          cout << c << '\n';
          break;
        }
        if (!(--((*t).second))) ++t;
      }
      q.pop();
    }
  }
}