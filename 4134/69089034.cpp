// 2023년 11월 10일 11:09:56
// 틀렸습니다
// KB
// ms
#include <iostream>
using namespace std;

typedef long long L;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  for (int q = 0; q < t; q++) {
    L n;
    cin >> n;
    bool check = 1;
    for (L i = n;; i++) {
      for (L j = 2; j * j <= i; j++) {
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