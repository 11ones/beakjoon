// 2024년 5월 20일 17:25:58
// 틀렸습니다
// KB
// ms
#include <iostream>
using namespace std;

int main() {
  char s[101];
  cin.getline(s, 101);
  for (int i = 0; i < 101; i++) {
    if (s[i] == '\0') {
      break;
    } else if (s[i] == ' ') {
      cout << ' ';
    } else if (s[i] >= 'a') {
      cout << (char)((s[i] + 13 - 'a') % 26 + 'a');
    } else {
      cout << (char)((s[i] + 13 - 'A') % 26 + 'A');
    }
  }
}