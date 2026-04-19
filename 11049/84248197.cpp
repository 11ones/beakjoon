// 2024년 9월 23일 23:50:15
// 런타임 에러 (Segfault)
// KB
// ms
#include <bits/stdc++.h>
using namespace std;
typedef long long l;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<l> v(n + 1);
  for (int i = 0; i < n; i++) {
    cin >> v[i] >> v[i + 1];
  }
  array<array<l, 500>, 500> a;
  fill(&a[0][1], &a[n - 1][n], 1e12);

  for (int i = 1; i < n; i++) {
    a[i - 1][i] = v[i - 1] * v[i] * v[i + 1];
  }
  for (int i = 2; i < n; i++) {
    for (int j = 0; j < n - i; j++) {
      a[j][j + i] = min(a[j][j + i - 1] + v[j] * v[j + i] * v[j + i + 1], a[j + 1][j + i] + v[j] * v[j + 1] * v[j + i + 1]);
      for (int k = 1; k < n - j + 1; k++) {
        a[j][j + i] = min(a[j][j + i], a[j][j + k - 1] + a[j + k][j + i] + v[j] * v[j + k] * v[j + i + 1]);
      }
    }
  }
  cout << a[0][n - 1];
}