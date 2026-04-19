// 2025년 10월 30일 01:18:01
// 맞았습니다!!
// 2032KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  array<double, 8> a;
  for(auto &e : a) cin >> e;
  cout << setprecision(10) << fixed << sqrt(max(pow(a[2] - a[0], 2) + pow(a[3] - a[1], 2), pow(a[6] - a[4], 2) + pow(a[7] - a[5], 2)));
}