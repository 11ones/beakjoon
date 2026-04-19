// 2024년 6월 27일 15:13:07
// 맞았습니다!!
// 2020KB
// 0ms
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  n = n / 100 * 100;
  for(int i = 0; i < 100; i++) {
    if(n % k == 0) {
      cout << setfill('0') << setw(2) << n % 100;
      return 0;
    }
    n++;
  }
}