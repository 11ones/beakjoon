// 2026년 2월 22일 01:53:22
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  long M = 1'000'000'009;
  array<long, 60000> v = {0, 1, 2, 4, };

  for (int i = 4; i < 59999; ++i) {
    v[i] = (v[i - 1] + v[i - 2] + v[i - 3]) % M;
  }

  int T;
  cin >> T;
  while (T--) {
    int x;
    cin >> x;
    cout << (v[x / 2] + v[x / 2 - 1]) % M << '\n';
  }
}