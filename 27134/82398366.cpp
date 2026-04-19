// 2024년 8월 13일 00:08:34
// 맞았습니다!!
// 2152KB
// 0ms
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

  int n;
  cin >> n;
  int mxw = n * (n + 1) / 2;
  if (mxw % 2) {
    cout << 0;
    return 0;
  }
  mxw /= 2;
  ll **d = new ll *[n + 1];
  for (int i = 0; i <= n; i++) {
    d[i] = new ll[mxw + 1]{};
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