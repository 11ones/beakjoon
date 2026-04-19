// 2024년 5월 31일 23:29:44
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  int x, t, cnt = 0;
  cin >> x;
  for (int i = 0; i < 5; i++) {
    cin >> t;
    if (x == t) cnt++;
  }
  cout << cnt;
}