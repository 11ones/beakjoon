// 2026년 4월 6일 16:38:46
// 맞았습니다!!
// 17648KB
// 112ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  const long MOD = 1'000'000'007;
  long N, M, K, x, y, z;
  cin >> N >> M >> K;
  M += K;
  vector<long> v(2 * N, 1);
  for (int i = 0; i < N; ++i) cin >> v[N + i];
  for (int i = N - 1; i > 1; --i) v[i] = v[i << 1] * v[i << 1 | 1] % MOD;
  while (M--) {
    cin >> x >> y >> z;
    if (x == 1) {
      for (v[y += N - 1] = z; y > 1; y >>= 1) v[y >> 1] = v[y] * v[y ^ 1] % MOD;
    } else {
      x = 1;
      for (y += N - 1, z += N; y < z; y >>= 1, z >>= 1) {
        if (y & 1) x = x * v[y++] % MOD;
        if (z & 1) x = x * v[--z] % MOD;
      }
      cout << x << '\n';
    }
  }
}