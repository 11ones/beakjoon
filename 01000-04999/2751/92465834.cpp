// 2025년 4월 2일 19:42:36
// 맞았습니다!!
// 5928KB
// 256ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  vector<int> v(n);
  for (auto &e : v) cin >> e;
  sort(v.begin(), v.end());
  for (auto e : v) cout << e << '\n';
}