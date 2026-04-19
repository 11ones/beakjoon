// 2025년 3월 19일 21:07:03
// 맞았습니다!!
// 6084KB
// 56ms
#include <bits/stdc++.h>
using namespace std;

typedef array<int, 2> A;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, mx = 0;
  cin >> n;
  priority_queue<A, vector<A>, greater<A>> q;
  vector<A> v(n);
  vector<int> a(n);
  set<int> s;
  for (auto &e : v) cin >> e[0] >> e[1];
  sort(v.begin(), v.end());
  for (auto e : v) {
    while (!q.empty() && e[0] > q.top()[0]) {
      s.insert(q.top()[1]);
      q.pop();
    }
    if (s.empty()) {
      a[q.size()]++;
      q.push({e[1], (int)q.size()});
    } else {
      q.push({e[1], *s.begin()});
      a[*s.begin()]++;
      s.erase(s.begin());
    }
    mx = max(mx, (int)q.size());
  }
  cout << mx << '\n';
  for (int i = 0; i < mx; i++) {
    cout << a[i] << ' ';
  }
}