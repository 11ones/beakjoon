// 2026년 3월 9일 15:55:01
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, mx = 0, p = 0;
  cin >> N;
  vector<int> d;
  vector<array<int, 2>> v(N);
  for (int i = 0; i < N; ++i) {
    cin >> v[i][0];
    int x = lower_bound(d.begin(), d.end(), v[i][0]) - d.begin();
    if (d.empty() || x == mx)
      d.push_back(v[i][0]);
    else
      d[x] = v[i][0];
    v[i][1] = x;
    mx = max(mx, v[i][1]);
  }
  cout << ++mx << '\n';
  for (int i = 0; i < N; ++i) {
    if (p == v[i][1]) {
      cout << v[i][0] << " ";
      ++p;
    }
  }
}