// 2025년 1월 25일 20:17:38
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int T;
  cin >> T;
  while (T--) {
    vector<int> a(52, 1), b(52);
    int c = 0;
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
      t *= 4;
      switch (s[1]) {
        case 'C':
          t += 1;
          break;
        case 'H':
          t += 2;
          break;
        case 'S':
          t += 3;
      }
      a[t]--;
      b[t]++;
    }
    for (int i = 0; i < 52; i++) {
      for (int j = i + 1; j < 52; j++) {
        while (b[j] && a[i]) {
          c++;
          a[i]--;
          b[j]--;
        }
      }
    }
    cout << c << '\n';
  }
}