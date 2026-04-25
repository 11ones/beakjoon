// 2024년 12월 3일 23:14:13
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int a[4] = {};
  int s = 0, mn = 1e6;
  for(int i = 0; i < 4; i++) {
    cin >> a[i];
    s += a[i];
  }
  for(int i = 0; i < 4; i++) {
    for(int j = i + 1; j < 4; j++) {
      mn = min(mn, abs(s - (a[i] + a[j]) * 2));
    }
  }
  cout << mn;
}