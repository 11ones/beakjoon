// 2024년 7월 12일 21:34:35
// 맞았습니다!!
// 4932KB
// 48ms
#include <iostream>
using namespace std;

int main() {
  string s, t;
  cin >> s;
  s = "000" + s;
  for(int i = s.length(); i > 3; i -= 3) {
    t.push_back(s[i - 3] * 4 + s[i - 2] * 2 + s[i - 1] - '0' * 6);
  }
  for(int i = t.size() - 1; i >= 0; i--) {
    cout << t[i];
  }
}