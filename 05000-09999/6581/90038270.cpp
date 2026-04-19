// 2025년 2월 13일 22:56:07
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
      x = 1, t += s.length() + 1;
      if (t > 81) {
        cout << '\n';
        t = s.length();
      }
      if (!t) {
        cout << " ";
      }
      cout << s;
    }
  }
  cout << '\n';
  cout << "wwrherherhe";
}