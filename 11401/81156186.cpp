// 2024년 7월 16일 23:26:50
// 맞았습니다!!
// 2020KB
// 32ms
#include <iostream>
#include <vector>
#define MOD 1'000'000'007
using namespace std;
typedef long long l;

l mlt(l kp, l p) {
  if (!p) {
    return 1;
  }
  l t = mlt(kp, p / 2);
  if (p % 2) {
    return (((t * t) % MOD) * kp) % MOD;
  }
  return (t * t) % MOD;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k;
  cin >> n >> k;
  l ans = 1;
  for (int i = n - k + 1; i <= n; i++) {
    ans = (ans * i) % MOD;
  }
  l kp = 1;
  for (int i = 2; i <= k; i++) {
    kp = (kp * i) % MOD;
  }
  cout << (ans * mlt(kp, MOD - 2)) % MOD;
}