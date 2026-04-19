// 2024년 3월 3일 18:37:39
// 맞았습니다!!
// 2020KB
// 4ms
#include <iostream>
#define MOD 1'000'000'007
using namespace std;
typedef long long l;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  l ans = 0;
  int m;
  cin >> m;
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    l r1 = MOD, r2 = a;
    l s1 = 1, s2 = 0, t1 = 0, t2 = 1;
    l q, r, s, t;
    while (r2 != 0) {
      q = r1 / r2;
      r = r1 % r2;
      s = s1 - q * s2;
      t = t1 - q * t2;
      r1 = r2;
      r2 = r;
      s1 = s2;
      s2 = s;
      t1 = t2;
      t2 = t;
    }
    ans = (ans + b * ((t1 + MOD) % MOD)) % MOD;
  }
  cout << ans;
}