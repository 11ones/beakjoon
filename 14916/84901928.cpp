// 2024년 10월 8일 10:08:51
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  if(n == 1 || n == 3) {
    cout << -1;
    return 0;
  }
  if(n % 2) {
    if(n / 5 % 2) {
      cout << n / 5 + (n - n / 5 * 5) / 2;
    } else {   
      cout << n / 5 - 1 + (n - (n / 5 - 1) * 5) / 2;
    }
  } else {
    if(n / 5 % 2) {
      cout << n / 5 - 1 + (n - (n / 5 - 1) * 5) / 2;
    } else {
      cout << n / 5 + (n - n / 5 * 5) / 2;
    }
  }
}
