// 2025년 3월 19일 12:39:36
// 맞았습니다!!
// 2156KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  
  vector<array<int, 2>> v(n), d(n);
  for(auto &e : v) cin >> e[0] >> e[1];
  d[0] = v[0];
  for(int i = 1; i < n; ++i) {
    d[i][0] = max(d[i - 1][0] + abs(v[i - 1][1] - v[i][1]), d[i - 1][1] + abs(v[i - 1][0] - v[i][1])) + v[i][0];
    d[i][1] = max(d[i - 1][0] + abs(v[i - 1][1] - v[i][0]), d[i - 1][1] + abs(v[i - 1][0] - v[i][0])) + v[i][1];
  }
  cout << max(d[n - 1][0], d[n - 1][1]);
}