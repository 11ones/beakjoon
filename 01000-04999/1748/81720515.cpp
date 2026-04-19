// 2024년 7월 28일 23:30:50
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  long long n, x = 0, t = 9, i = 1;
  cin >> n;
  for (; n - t >= 0; i++) {
    x += (t - t / 10) * i;
    t = t * 10 + 9;
  }
  if (n > 9)
    x += (n - t / 10) * i;
  else
    x = n;
  cout << x;
}