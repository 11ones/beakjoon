// 2024년 6월 24일 23:36:25
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  int x, sum = 0, mn = 100;
  for(int i = 0; i < 7; i++) {
    cin >> x;
    if(x % 2) {
      sum += x;
      mn = min(mn, x);
    }
  }
  if(sum == 0) {
    cout << "-1";
  } else {
    cout << sum << "\n" << mn;
  }
}