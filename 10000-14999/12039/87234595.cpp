// 2024년 12월 6일 22:44:39
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) { return b != 0 ? gcd(b, a % b) : a; }

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  const int MOD = 1e9 + 7;
  int tc;
  cin >> tc;
  for (int o = 1; o <= tc; o++) {
    int c, v, l;
    cin >> c >> v >> l;
    vector<long long> a(l + 1);
    a[0] = 1;
    a[1] = v;
    for (int i = 2; i <= l; i++) {
      a[i] = (v * a[i - 1] + v * c * a[i - 2]) % MOD;
    }
    cout << "Case #" << o << ": " << a[l] << '\n';
  }
}