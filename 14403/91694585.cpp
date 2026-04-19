// 2025년 3월 20일 12:01:12
// 맞았습니다!!
// 2176KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  long n, x1, y1, x2, y2, xt, yt, r1, r2;
  cin >> n >> x1 >> y1 >> x2 >> y2;
  r1 = r2 = 0;
  vector<array<long, 2>> v(n);
  for (auto &e : v) {
    cin >> xt >> yt;
    e = {(long)(pow(x1 - xt, 2) + pow(y1 - yt, 2)), (long)(pow(x2 - xt, 2) + pow(y2 - yt, 2))};
  }
	sort(v.begin(), v.end(), greater<>());
  long mn = v[0][0], tmx = 0;
  for(int i = 1; i < n; i++) {
    tmx = max(tmx, v[i - 1][1]);
    mn = min(mn, tmx + v[i][0]);
  }
  mn = min(mn, max(tmx, v[n - 1][1]));
  cout << mn;
}