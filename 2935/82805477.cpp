// 2024년 8월 21일 22:18:52
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, p, t;
  cin >> s >> p >> t;
  int sl = s.length();
  int tl = t.length();
  int ml = max(sl, tl);
  if (p == "+") {
    for (int i = 0; i < ml; i++) {
      if (ml - i == sl || ml - i == tl) {
        if (sl == tl) {
          cout << 2;
        } else {
          cout << 1;
        }
      } else {
        cout << 0;
      }
    }
  } else {
    cout << 1;
    for (int i = 2; i < sl + tl; i++) {
      cout << 0;
    }
  }
}