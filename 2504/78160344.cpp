// 2024년 5월 10일 23:39:42
// 맞았습니다!!
// 2024KB
// 0ms
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

char brk[2][3] = {{'(', ')', 2}, {'[', ']', 3}};

int f(string s) {
  int r = 0;
  if (s[0] == ')' || s[0] == ']') {
    return -1;
  }
  auto it = s.begin();
  int d = 0;
  int tr = 0;
  for (int i = 0; i < 2; i++) {
    if (*it == brk[i][0]) {
      it++;
      while (it != s.end()) {
        if (*it == brk[i][0]) {
          d++;
        } else if (*it == brk[i][1]) {
          d--;
        }
        if (d < 0) {
          if (it - s.begin() == 1) {
            if (s[0] == brk[i][0] && s[1] == brk[i][1]) {
              r = brk[i][2];
            } else {
              return -1;
            }
          } else {
            tr = f(s.substr(1, it - s.begin() - 1));
            if (tr == -1) {
              return -1;
            }
            r = brk[i][2] * tr;
          }
          if (it + 1 < s.end()) {
            tr = f(s.substr(it - s.begin() + 1));
            if (tr == -1) {
              return -1;
            }
            r += tr;
          }
          return r;
        }
        it++;
      }
    }
  }
  return -1;
}

int main() {
  string s;
  cin >> s;
  int r = f(s);
  cout << (r == -1 ? 0 : r);
}