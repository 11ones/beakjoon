// 2025년 7월 18일 16:08:08
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
    cout << (n - n / 3 - 1) / 2 + n / 2 + 1 << '\n';
  }
}