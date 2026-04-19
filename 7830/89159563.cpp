// 2025년 1월 25일 20:06:16
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int T;
  cin >> T;
  while (T--) {
    int a[13], b[13] = {}, c = 0;
    for (int i = 0; i < 13; i++) {
      a[i] = 4;
    }
    for (int i = 0; i < 26; i++) {
      string s;
      cin >> s;
      int t;
      if (s[0] >= '2' && s[0] <= '9') {
        t = s[0] - '2';
      }
      switch (s[0]) {
        case 'T':
          t = 8;
          break;
        case 'J':
          t = 9;
          break;
        case 'Q':
          t = 10;
          break;
        case 'K':
          t = 11;
          break;
        case 'A':
          t = 12;
      }
      a[t]--;
      b[t]++;
    }
    for (int i = 0; i < 13; i++) {
      for (int j = i + 1; j < 13; j++) {
        while (b[j] > 0 && a[i] > 0) {
          c++;
          a[i]--;
          b[j]--;
        }
      }
    }
    cout << c << '\n';
  }
}