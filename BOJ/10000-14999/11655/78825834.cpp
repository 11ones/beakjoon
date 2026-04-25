// 2024년 5월 25일 18:46:05
// 맞았습니다!!
// 2020KB
// 0ms
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
    } else if (s[i] >= 'A') {
      cout << (char)((s[i] + 13 - 'A') % 26 + 'A');
    } else {
      cout << s[i];
    }
  }
}