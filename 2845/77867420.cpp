// 2024년 5월 4일 22:08:37
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  int a, b, t;
  cin >> a >> b;
  for (int i = 0; i < 5; i++) {
    cin >> t;
    cout <<  t - a * b << " ";
  }
}