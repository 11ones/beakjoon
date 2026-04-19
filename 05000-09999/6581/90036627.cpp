// 2025년 2월 13일 22:25:35
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  string s;
  bool x = 1;
  while (cin >> s) {
    if (s[0] == '<') {
      if (s[1] == 'b') {
        cout << '\n';
        x = 0;
      }
      if (s[1] == 'h') {
        if (x) cout << '\n';
        for(int i = 0; i < 80; i++) {
          cout << '-';
        }
        cout << '\n';
        x = 0;
      }
    } else {
      x = 1;
      cout << s << " ";
    }
  }
}