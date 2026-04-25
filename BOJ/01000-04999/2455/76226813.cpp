// 2024년 4월 2일 23:50:55
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  int x = 0, a, b, mx = 0;
  for(int i = 0; i < 4; i++) {
    cin >> a >> b;
    x += b - a;
    mx = max(mx, x);
  }
  cout << mx;
}