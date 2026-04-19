// 2024년 3월 5일 23:06:55
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int g (int a, int b) {
  return b ? g(b, a % b) : a;
}

int main() {
  int a, b, c;
  cin >> a >> b;
  a = b - a;
  c = g(b, a);
  cout << a / c << " " << b / c;
}