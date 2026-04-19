// 2025년 10월 2일 14:46:47
// 맞았습니다!!
// 2036KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int cx, cy, n, x, y, r;
  cin >> cx >> cy >> n;
  vector<double> v;
  for(int i = 0; i < n; ++i) {
    cin >> x >> y >> r;
    v.push_back(max(sqrt(pow(cx - x, 2) + pow(cy - y, 2)) - r, (double)0));
  }
  sort(v.begin(), v.end());
  cout << (int)v[2];
}