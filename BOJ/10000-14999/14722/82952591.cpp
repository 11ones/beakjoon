// 2024년 8월 25일 12:20:09
// 맞았습니다!!
// 9712KB
// 60ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  array<array<int, 1000>, 1000> d{}, a;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }
  if (!a[0][0]) {
    d[0][0] = 1;
  }
  for (int i = 1; i < n; i++) {
    d[0][i] = d[0][i - 1];
    d[i][0] = d[i - 1][0];
    if (d[0][i - 1] % 3 == a[0][i]) {
      d[0][i]++;
    }
    if (d[i - 1][0] % 3 == a[i][0]) {
      d[i][0]++;
    }
  }
  for (int i = 1; i < n; i++) {
    for (int j = 1; j < n; j++) {
      int tmx = 0;
      if (d[i][j - 1] % 3 == a[i][j]) {
        tmx = max(tmx, d[i][j - 1] + 1);
      } else {
        tmx = max(tmx, d[i][j - 1]);
      }
      if (d[i - 1][j] % 3 == a[i][j]) {
        tmx = max(tmx, d[i - 1][j] + 1);
      } else {
        tmx = max(tmx, d[i - 1][j]);
      }
      d[i][j] = tmx;
    }
  }
  cout << d[n - 1][n - 1];
}