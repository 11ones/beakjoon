// 2024년 7월 11일 22:24:46
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  int s = 0, x;
  for(int i = 0; i < 6; i++) {
    cin >> x;
    s += x;
  }
  cout << s * 5;
}