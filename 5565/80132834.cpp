// 2024년 6월 26일 23:10:23
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  int n, t;
  cin >> n;
  for(int i = 0; i < 9; i++) {
    cin >> t;
    n -= t;
  }
  cout << n;
}