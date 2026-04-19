// 2025년 5월 27일 15:59:55
// 맞았습니다!!
// 2028KB
// 0ms
#include <bits/stdc++.h>
using namespace std;
map<char, int> m{{'H', 1}, {'C', 12}, {'O', 16}};

int f(string s) {
  int x = 0;
  int l = s.size();
  for (int i = 0; i < l; ++i) {
    if (s[i] == '(') {
      int p = 0;
      for (int j = i; j < l; ++j) {
        if (s[j] == '(') ++p;
        if (s[j] == ')') --p;
        if (!p) {
          int t = f(s.substr(i + 1, j - i - 1));
          i = j;
          if (j + 1 != l && s[j + 1] >= '2' && s[j + 1] <= '9') {
            x += t * (s[j + 1] - '0');
            ++i;
          } else {
            x += t;
          }
          break;
        }
      }
    } else {
      if (i + 1 != l && s[i + 1] >= '2' && s[i + 1] <= '9') {
        x += m[s[i]] * (s[i + 1] - '0');
      } else {
        x += m[s[i]];
      }
    }
  }
  return x;
}

int main() {
  string s;
  cin >> s;
  cout << f(s);
}