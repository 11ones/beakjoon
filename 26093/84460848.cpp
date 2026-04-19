// 2024년 9월 28일 15:39:41
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k;
  cin >> n >> k;
  array<array<int, 10000>, 100> a, d{};
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < k; j++) {
      cin >> a[i][j];
    }
  }
  d[0] = a[0];
  for (int i = 1; i < n; i++) {
    for (int j = 0; j < k; j++) {
      for (int l = 0; l < k; l++) {
        if (j != l) d[i][j] = max(d[i][j], d[i - 1][l]);
      }
      d[i][j] += a[i][j];
    }
  }
  cout << *max_element(d[n - 1].begin(), d[n - 1].end());
}