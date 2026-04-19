// 2024년 5월 7일 22:26:54
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  int n, x, z = 0, o = 0;
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> x;
    if(x) {
      o++;
      continue;
    }
    z++;
  }
  cout << (z > o ? "Junhee is not cute!" : "Junhee is cute!");
}