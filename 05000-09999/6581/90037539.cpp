// 2025년 2월 13일 22:42:24
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  string s;
  int t = 0;
  bool x = 1, y = 0;
  while (cin >> s) {
    if (s[0] == '<') {
      if (s[1] == 'h') {
        if (x) cout << '\n';
        for (int i = 0; i < 80; i++) {
          cout << '-';
        }
      }
      cout << '\n';
      x = y = t = 0;
    } else {
      x = 1, t += s.length() + 1;
      if (t > 81) {
        cout << '\n';
        t = y = 0;
      }
      if (y) {
        cout << " ";
        y = 0;
      }
      cout << s;
      y = 1;
    }
  }
  cout << '\n';
}