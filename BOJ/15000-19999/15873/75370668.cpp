// 2024년 3월 20일 22:58:01
// 틀렸습니다
// KB
// ms
#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  switch (s.length()) {
  case 2:
    cout << s[0] + s[1] - '0' * 2;
    break;
  case 3:
    if (s[1] == '0') {
      cout << 10 + s[2] - '0';
    } else {
      cout << 10 + s[1] - '0';
    }
    break;
  case 4:
    cout << 20;
  }
}