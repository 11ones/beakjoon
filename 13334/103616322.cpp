// 2026년 3월 7일 19:56:49
// 맞았습니다!!
// 3680KB
// 36ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int N, D, mx = 0;
  cin >> N;
  vector<array<int, 2>> v(N);
  for (auto &e : v) {
    cin >> e[0] >> e[1];
    if (e[0] < e[1]) swap(e[0], e[1]);
  }
  cin >> D;
  sort(v.begin(), v.end());
  priority_queue<int, vector<int>, greater<>> q;
  for (auto e : v) {
    while (!q.empty() && e[0] - q.top() > D) {
      q.pop();
    }
    if (e[0] - e[1] <= D) q.push(e[1]);
    mx = max(mx, (int)q.size());
  }
  cout << mx;
}