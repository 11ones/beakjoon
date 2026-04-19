// 2024년 12월 21일 16:22:16
// 맞았습니다!!
// 166060KB
// 2996ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n, c = 0, ta = 1, tb = 1;
  cin >> n;
  array<vector<int>, 4> v;
  for (auto &e : v) {
    e = vector<int>(n);
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 4; j++) {
      cin >> v[j][i];
    }
  }
  array<vector<int>, 2> u;
  for (int i = 0; i < 4; i += 2) {
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < n; k++) {
        u[i / 2].push_back(v[i][j] + v[i + 1][k]);
      }
    }
    sort(u[i / 2].begin(), u[i / 2].end());
  }
  auto a = u[0].begin(), b = u[1].end();
  while (a != u[0].end() && b != u[1].begin()) {
    b--;
    if (*a + *b == 0) {
      if ((a + 1) != u[0].end() && *(a + 1) == *a) {
        ta++;
        a++;
        b++;
        continue;
      }
      if (b != u[1].begin() && *(b - 1) == *b) {
        tb++;
        continue;
      }
      c += ta * tb;
      ta = tb = 1;
    }
    if (*a + *b < 0) {
      a++;
      b++;
    }
  }
  cout << c;
}