// 2024년 2월 25일 15:24:09
// 맞았습니다!!
// 2024KB
// 0ms
#include <algorithm>
#include <iostream>
using namespace std;
int main() {
  string s;
  cin >> s;
  bool check = 1;
  for (int i = 0; i < s.length(); i++) {
    for (int j = 0; j <= s.length() - i; j++) {
      string t = s.substr(i, j);
      reverse(t.begin(), t.end());
      if (t == s.substr(i, j) && t.length() % 2 == 0 && !t.empty()) {
        check = 0;
      }
    }
  }
  if (check) {
    cout << "Odd.";
  } else {
    cout << "Or not.";
  }
}