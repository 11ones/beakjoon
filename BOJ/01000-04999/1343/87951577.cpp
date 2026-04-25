// 2024년 12월 29일 23:34:08
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;
  int l = s.length();
  for(int i = 0; i < l; i++) {
    if(s[i] == '.') continue;
    if(i + 4 <= l) {
      for(int j = i; j < i + 4; j++) {
        if(s[j] != 'X') {
          goto E;
        }
      }
      s[i] = s[i + 1] = s[i + 2] = s[i + 3] = 'A';
      i += 3;
      continue;
    }
    E:
    if(i + 2 <= l) {
      for(int j = i; j < i + 2; j++) {
        if(s[j] != 'X') {
          goto F;
        }
      }
      s[i] = s[i + 1] = 'B';
      i++;
      continue;
    }
    F:
    cout << -1;
    return 0;
  }
  cout << s;
}