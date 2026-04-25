// 2026년 3월 9일 16:05:02
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, mx = 0;
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
    mx = max(mx, v[i][1] + 1);
  }
  d.resize(mx);
  cout << mx << '\n';
  for (int i = N - 1; i >= 0; --i) {
    if (mx - 1 == v[i][1]) {
      d[--mx] == v[i][0];
    }
  }
  for (int e : d) cout << e << " ";
}