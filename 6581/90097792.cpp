// 2025년 2월 15일 13:09:08
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  string s;
  int t = 0;
  bool x = 1;
  while (cin >> s) {
    if (s[0] == '<') {
      if (s[1] == 'h') {
        if (x) cout << '\n';
        for (int i = 0; i < 80; i++) {
          cout << '-';
        }
      }
      cout << '\n';
      x = t = 0;
    } else {
      x = 1;
      if (t + s.length() + 1> 81) {
        cout << '\n';
        t = 0;
      }
      if (t) {
        cout << " ";
      }
      t += s.length() + 1;
      cout << s;
    }
  }
  cout << '\n';
}