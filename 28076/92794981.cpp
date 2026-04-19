// 2025년 4월 8일 17:01:32
// 맞았습니다!!
// 2804KB
// 36ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  vector<int> v(n);
  for (auto &e : v) cin >> e;
  if (n == 1) {
    cout << v[0];
  } else if (n == 2) {
    cout << v[0] + v[1] - 1;
  } else {
    sort(v.begin(), v.end(), greater<>());
    if (n % 3 == 1) {
      cout << v[0] + v[(n + 2) / 3] + v[n / 3 * 2 + 1] - 3;
    } else {
      cout << v[0] + v[(n + 2) / 3] + v[(n + 1) / 3 * 2] - 3;
    }
  }
}