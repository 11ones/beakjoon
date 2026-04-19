// 2024년 7월 20일 14:53:27
// 맞았습니다!!
// 2024KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  int cnt = 0;
  int d = 0;
  for (auto e : s) {
    if (!d) {
      if (e == ')') {
        cnt++;
        continue;
      }
      d++;
      continue;
    }
    if (e == ')') {
      d--;
      continue;
    }
    d++;
    continue;
  }
  cout << cnt + d;
}