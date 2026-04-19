// 2024년 6월 16일 17:25:55
// 맞았습니다!!
// 2024KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  int x = 0, l = s.length();
  for (int i = 1; i * i <= l; i++) {
    if (l % i == 0) {
      x = i;
    }
  }
  for (int i = 0; i < x; i++) {
    for (int j = 0; j < l / x; j++) {
      cout << s[(i + j * x) % l];
    }
  }
}