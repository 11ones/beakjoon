// 2023년 11월 3일 12:23:27
// 시간 초과
// KB
// ms
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  for (int q = 0; q < t; q++) {
    int n;
    cin >> n;
    bool check = 1;
    for (int i = n;; i++) {
      for (int j = 2; j * j <= i; j++) {
        if (i % j == 0) {
          check = 0;
          break;
        }
      }
      if (check == 1) {
        cout << i << endl;
        break;
      }
      check = 1;
    }
  }
}