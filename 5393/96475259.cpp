// 2025년 7월 18일 16:10:06
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
    
    cout << (n < 2 ? 0 : (n - n / 3 - 1) / 2 + n / 2 + 1) << '\n';
  }
}