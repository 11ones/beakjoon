// 2025년 3월 12일 16:30:59
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, t, c = 0, d = 0, m = 0;
  cin >> n >> k;
  cin >> m;
  for (int i = 1; i < n; i++) {
    cin >> t;
    if(m != t) {
      d++;
      c += t - m;
    }
  }
  cout << c << " " << d;
}