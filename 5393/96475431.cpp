// 2025년 7월 18일 16:13:11
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while(T--) {
    int n;
    cin >> n;
    int a[3] = {0, 0, 1};
    cout << (n < 3 ? a[n] : (n - n / 3 - 1) / 2 + n / 2 + 1) << '\n';
  }
}