// 2024년 6월 22일 18:18:25
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main() {
 int a = 0, b = 0, t;
  for(int i = 0; i < 4; i++) {
    cin >> t;
    a += t;
  }
  for(int i = 0; i < 4; i++) {
    cin >> t;
    b += t;
  }
  cout << max(a, b);
}