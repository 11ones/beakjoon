// 2024년 6월 12일 22:50:45
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  bool arr[1001] = {};
  int c = 0;
  for (int i = 2; i <= n; i++) {
    int x = i;
    while (x <= n) {
      if (!arr[x]) {
        arr[x] = 1;
        c++;
        if(c == k) {
          cout << x;
          return 0;
        }
      }
      x += i;
    }
  }
}