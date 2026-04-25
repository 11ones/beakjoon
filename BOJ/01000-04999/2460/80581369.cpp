// 2024년 7월 5일 22:33:55
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  int x = 0, mx = 0;
  for(int i = 0; i < 10; i++) {
    int a, b;
    cin >> a >> b;
    x += b - a;
    mx = max(mx, x);
  }
  cout << mx;
}