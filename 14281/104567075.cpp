// 2026년 4월 1일 03:47:09
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  long N, c = 0;
  cin >> N;
  vector<long> v(N);
  for (auto &e : v) cin >> e;
  for (int o = 0; o < N; ++o)
    for (int i = 2; i < N; ++i) {
      int t = v[i - 1] * 2 - v[i] - v[i - 2];
      if (t < 0) continue;
      c += (t + 1) / 2;
      v[i - 1] -= (t + 1) / 2;
    }
  cout << c;
}