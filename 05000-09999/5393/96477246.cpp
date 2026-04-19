// 2025년 7월 18일 16:49:44
// 맞았습니다!!
// 2020KB
// 12ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while(T--) {
    int n;
    cin >> n;
    cout << (n + 1) / 2 * 2 - ((n - 1) / 3 + 1) / 2 << '\n';
  }
}