// 2024년 8월 12일 23:31:52
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
  }
  mxw /= 2;
  int *d = new int[mxw + 1]{};
  for (int i = 1; i <= n; i++) {
    for (int j = mxw; j >= i; j--) {
      if (d[j] < d[j - i] + 1) {
        d[j] = d[j - i] + 1;
      }
    }
  }
  cout << d[mxw];
}