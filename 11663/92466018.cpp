// 2025년 4월 2일 19:44:56
// 맞았습니다!!
// 2412KB
// 68ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, m;
  cin >> n >> m;
  vector<int> v(n);
  for (auto &e : v) cin >> e;
  sort(v.begin(), v.end());
  while(m--) {
    int a, b;
    cin >> a >> b;
    cout << upper_bound(v.begin(), v.end(), b) - lower_bound(v.begin(), v.end(), a) << '\n';
  }
}