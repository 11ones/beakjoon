// 2024년 8월 10일 13:37:52
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  for(int o = 0; o < tc; o++) {
    int b, x, y;
    cin >> b >> x >> y;
    int t = 0, m = 1;
    while(x != 0 || y != 0) {
      t += (x % b + y % b) % b * m;
      x /= b;
      y /= b;
      m *= b;
    }
    cout << t << '\n';
  }
}