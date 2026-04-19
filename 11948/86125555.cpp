// 2024년 11월 6일 23:45:41
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  array<int, 4> a;
  int b, c;
  cin >> a[0] >> a[1] >> a[2] >> a[3] >> b >> c;
  cout << a[0] + a[1] + a[2] + a[3] + max(b, c) - *min_element(a.begin(), a.end());
}