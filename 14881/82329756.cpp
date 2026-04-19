// 2024년 8월 11일 15:28:10
// 맞았습니다!!
// 2020KB
// 4ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tc;
  cin >> tc;
  for (int o = 0; o < tc; o++) {
    int a, b, c;
    cin >> a >> b >> c;
    int ta = a, tb = b;
    while (tb) {
      int t = tb;
      tb = ta % tb;
      ta = t;
    }
    cout << (!(c % ta) && c <= max(a, b) ? "YES\n" : "NO\n");
  }
}