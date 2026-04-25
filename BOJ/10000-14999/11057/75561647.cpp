// 2024년 3월 23일 22:38:26
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int sum[10];
  fill(&sum[0], &sum[10], 1);
  for (int i = 0; i < n; i++) {
    for (int j = 1; j < 10; j++) {
      sum[j] = (sum[j] + sum[j - 1]) % 10007;
    }
  }
  cout << sum[9];
}