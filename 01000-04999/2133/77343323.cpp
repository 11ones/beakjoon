// 2024년 4월 22일 23:00:40
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int *d = new int[n + 1]{1};
  for (int i = 2; i <= n; i++) {
    d[i] += d[i - 2];
    for (int j = i - 2; j > 0; j -= 2) {
      d[i] += 2 * d[j];
    }
    if (i % 2 == 0) {
      d[i] += 2;
    }
  }
  cout << d[n];
}