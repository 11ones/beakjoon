// 2024년 4월 16일 00:01:08
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  a = a * b - c;
  cout << (a > 0 ? a : 0);
}