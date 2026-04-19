// 2026년 4월 16일 14:09:33
// 런타임 에러 (OutOfBounds)
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  long N, M, K, c = 0;
  cin >> N >> M >> K;
  vector<long> f = {1};
  for (int i = 1; i < 9; ++i) f.push_back(f.back() * i);
  for (int i = K; i <= M; ++i) {
    if (M - i < 0) continue;
    c += f[M] / f[i] / f[M - i] * f[N - M] / f[M - i] / f[N - M - M + i];
  }
  cout << setprecision(14) << (double)c / (f[N] / f[M] / f[N - M]);
}