// 2024년 6월 13일 23:46:49
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  int t, x = 0;
  for(int i = 0; i < 4; i++) {
    cin >> t;
    x += t;
  }
  cout << x / 60 << "\n" << x % 60;
}