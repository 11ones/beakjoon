// 2024년 7월 26일 23:21:11
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  int n, a, b, c, d;
  cin >> n >> a >> b >> c >> d;
  cout << n - max((a - 1) / c, (b - 1) / d) - 1;
}