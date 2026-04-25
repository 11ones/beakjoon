// 2024년 7월 21일 14:44:12
// 맞았습니다!!
// 2020KB
// 4ms
#include <iostream>
using namespace std;

int main() {
  int tc;
  cin >> tc;
  for (int o = 0; o < tc; o++) {
    int a[5] = {};
    int n;
    cin >> n;
    a[0] = n / 60;
    n %= 60;
    if(n > 35) {
      a[0]++;
      a[2] = 6 - (n + 5) / 10;
      if(n % 10 < 5) {
        a[3] = n % 10;
      } else {
        a[4] = 10 - n % 10;
      }
    } else {
      a[1] = (n + 4) / 10;
      if(n % 10 < 6) {
        a[3] = n % 10;
      } else {
        a[4] = 10 - n % 10;
      }
    }
    for(int i = 0; i < 5; i++) {
      cout << a[i] << " ";
    }
    cout << '\n';
  }
}