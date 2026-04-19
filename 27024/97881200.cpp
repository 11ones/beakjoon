// 2025년 8월 27일 16:28:54
// 맞았습니다!!
// 2020KB
// 4ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, mn = 1e9;
  cin >> n;
  vector<int> v(n);
  for(auto &e : v) cin >> e;
  sort(v.begin(), v.end());
  for(int i = 0; i < n / 2; ++i) {
    mn = min(mn, v[n / 2 + i] - v[i]);
  }
  cout << mn;
}