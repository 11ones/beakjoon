// 2024년 9월 17일 15:05:14
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
#define MOD 1'000'000'007
using namespace std;

typedef long long l;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  array<l, 60> a{1};
  array<l, 60> b{2};
  for (int i = 1; i < 60; i++) {
    a[i] = a[i - 1] * 2;
    b[i] = b[i - 1] * b[i - 1] % MOD;
  }
  l n, m, r, t = 1;
  cin >> n >> m;

  while (n > 1) {
    for (int i = 1; i < 60; i++) {
      if (n < a[i]) {
        t = t * (b[i - 1] % MOD) % MOD;
        n -= a[i - 1];
        break;
      }
    }
  }
  r = t;
  t = 1;
  while (m > 1) {
    for (int i = 1; i < 60; i++) {
      if (m < a[i]) {
        t = t * (b[i - 1] % MOD) % MOD;
        m -= a[i - 1];
        break;
      }
    }
  }
  cout << (t + r + MOD - 2) % MOD; 
}