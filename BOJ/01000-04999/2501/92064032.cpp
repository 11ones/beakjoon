// 2025년 3월 26일 20:11:18
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int a, b, c = 0;
  cin >> a >> b;
  for(int i = 1; i <= a; ++i) {
    if(!(a % i)) ++c;
    if(c == b) {
      cout << i;
      return 0;
    }
  }
  cout << 0;
}