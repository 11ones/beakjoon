// 2024년 7월 4일 23:39:18
// 맞았습니다!!
// 2020KB
// 76ms
#include <iostream>
using namespace std;

int main() {
  int n, x, sum = 1;
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> x;
    sum += x;
  }
  cout << sum - n;
}