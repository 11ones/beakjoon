// 2024년 12월 5일 23:00:01
// 맞았습니다!!
// 2020KB
// 40ms
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) { return b != 0 ? gcd(b, a % b) : a; }

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m, k, c = 0;
  cin >> n >> m >> k;
  for (int x1 = 0; x1 <= n; x1++) {
    for (int y1 = 0; y1 <= m; y1++) {
      for (int x2 = 0; x2 <= n; x2++) {
        for (int y2 = 0; y2 <= m; y2++) {
          if (k == gcd(abs(x2 - x1), abs(y2 - y1)) + 1) {
            c++;
          }
        }
      }
    }
  }
  cout << c / 2;
}