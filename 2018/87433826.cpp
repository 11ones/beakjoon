// 2024년 12월 13일 17:37:11
// 맞았습니다!!
// 2020KB
// 16ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, c = 0, t = 0, f = 0, b = 0;
  cin >> n;
  while (1) {
    if (t > n) {
      t -= f++;
    }
    if (t == n) {
      c++;
      t += ++b - f++;
    }
    if (t < n) {
      t += ++b;
    }
    if(b > n) {
      break;
    }
  }
  cout << c;
}