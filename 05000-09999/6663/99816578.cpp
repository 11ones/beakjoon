// 2025년 10월 30일 01:10:26
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  string s;
  array<array<char, 8>, 8> v = {};
  for (int i = 0; i < 2; ++i) {
    cin >> s >> s;
    int p = 0;
    while (p < s.size()) {
      if (s[p] < 'a') {
        if (i) s[p] = tolower(s[p]);
        v[8 - s[p + 2] + '0'][s[p + 1] - 'a'] = s[p];
        p += 4;
        continue;
      }
      v[8 - s[p + 1] + '0'][s[p] - 'a'] = i ? 'p' : 'P';
      p += 3;
    }
  }
  for (int i = 0; i < 8; ++i) {
    cout << '+';
    for (int j = 0; j < 8; ++j) {
      cout << "---+";
    }
    cout << "\n|";
    for (int j = 0; j < 8; ++j) {
      char t = (i + j) % 2 ? ':' : '.';
      cout << t << (v[i][j] ? v[i][j] : t) << t << '|';
    }
    cout << '\n';
  }
  cout << '+';
  for (int j = 0; j < 8; ++j) {
    cout << "---+";
  }
}