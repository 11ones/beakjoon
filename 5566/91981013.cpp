// 2025년 3월 25일 14:48:14
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, m, x, p = 0;
  cin >> n >> m;
  vector<int> v(n);
  for(auto &e : v) cin >> e;
  for(int i = 1; i <= m; i++) {
    cin >> x;
    p = p + x + v[p + x];
    if(p >= n - 1) {
      cout << i;
      return 0;
    }
  }
}