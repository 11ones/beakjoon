// 2026년 2월 22일 02:25:01
// 맞았습니다!!
// 3460KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  long M = 1'000'000'009;
  array<long, 100002> v = {0, 1, 2, 4, }, t = {0, 1, 2, 2, };

  for (int i = 4; i < 100001; ++i) {
    v[i] = (v[i - 1] + v[i - 2] + v[i - 3]) % M;
    t[i] = (v[i / 2] + v[i / 2 - 1]) % M;
  }

  int T;
  cin >> T;
  while (T--) {
    int x;
    cin >> x;
    cout << t[x] << '\n';
  }
}