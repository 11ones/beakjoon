// 2024년 10월 16일 23:55:33
// 런타임 에러 (Segfault)
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  array<array<char, (2 << 9)>, (2 << 9)> a;
  fill(&a[0][0], &a[2 << 9][(2 << 9) - 1], ' ');
  a[0][0] = '*';
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < (1 << i); j++) {
      for (int k = 0; k < (1 << i); k++) {
        a[j + (1 << i)][k] = a[j][k + (1 << i)] = a[j][k];
      }
    }
  }
  for (int i = 0; i < (1 << n); i++) {
    for (int j = 0; j < (1 << n) - i; j++) {
      cout << a[i][j];
    }
    cout << '\n';
  }
}