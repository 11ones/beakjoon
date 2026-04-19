// 2026년 4월 6일 15:26:23
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, Q, x, y, z;
  cin >> N;
  vector<vector<int>> S(4 * N, vector<int>(2, 1e9));
  for (int i = 0; i < N; ++i) {
    cin >> S[N + i][0];
    S[N + i][1] = i;
  }
  cin >> Q;
  for (int i = N - 1; i > 0; --i) {
    S[i] = S[i << 1][0] > S[i << 1 | 1][0] ? S[i << 1 | 1] : S[i << 1];
  }
  while (Q--) {
    cin >> x >> y >> z;
    if (x == 1) {
      for (S[y += N - 1][0] = z; y > 1; y >>= 1) {
        S[y >> 1] = S[y][0] > S[y ^ 1][0] ? S[y ^ 1] : S[y];
        S[y >> 1][1] =
            S[y][0] == S[y ^ 1][0] ? min(S[y][1], S[y ^ 1][1]) : S[y >> 1][1];
      }
    } else {
      vector<int> r = {(int)1e9, -1};
      for (y += N - 1, z += N; y < z; y >>= 1, z >>= 1) {
        if (y & 1) r = r[0] > S[y++][0] ? S[y - 1] : r;
        if (z & 1) r = r[0] > S[--z][0] ? S[z] : r;
      }
      cout << r[1] + 1 << '\n';
    }
  }
}