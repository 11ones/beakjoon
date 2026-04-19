// 2025년 10월 29일 22:56:06
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int N, a, b, c, s = 0;
  cin >> N;
  vector<array<int, 3>> v(N);
  for (auto& e : v) {
    cin >> e[0] >> e[1] >> e[2];
    --e[2];
  }
  sort(v.begin(), v.end());
  for (auto e : v) {
    int x = e[0], y = e[0];
    for (auto f : v) {
      if (f[0] >= e[0]) break;
      if (f[1] <= e[1] && e[1] <= f[2]) x = e[0] - f[0];
      if (f[1] <= e[2] && e[2] <= f[2]) y = e[0] - f[0];
    }
    s += x + y;
  }
  cout << s;
}