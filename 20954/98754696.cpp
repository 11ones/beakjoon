// 2025년 9월 21일 22:15:09
// 맞았습니다!!
// 2020KB
// 24ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int T, x;
  cin >> T;
  while (T--) {
    cin >> x;
    for (long i = 1; i < 2e9; i <<= 1) {
      if(abs(x) <= i) {
        cout << i * 4 - 4 + (x >= 0 ? 0 : 2 * i) + abs(x) << '\n';
        break;
      }
    }
  }
}