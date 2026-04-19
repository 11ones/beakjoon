// 2024년 5월 20일 17:26:14
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  int x, sum, mx = 0, pmx = 0;
  for (int i = 1; i <= 5; i++) {
    sum = 0;
    for (int j = 0; j < 4; j++) {
      cin >> x;
      sum += x;
    }
    if (mx < sum) {
      mx = sum;
      pmx = i;
    }
  }
  cout << pmx << " " << mx;
}