// 2024년 8월 13일 00:06:45
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int mxw = n * (n + 1) / 2;
  if (mxw % 2) {
    cout << 0;
    return 0;
  }
  mxw /= 2;
  int **d = new int *[n + 1];
  for (int i = 0; i <= n; i++) {
    d[i] = new int[mxw + 1]{};
  }
  for (int i = 0; i <= n; i++) { 
    d[i][0] = 1;
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= mxw; j++) {
      if (j >= i) {
        d[i][j] = d[i - 1][j] + d[i - 1][j - i];
      } else {
        d[i][j] = d[i - 1][j];
      }
    }
  }
  cout << d[n][mxw] / 2;
}