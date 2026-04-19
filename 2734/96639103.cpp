// 2025년 7월 23일 04:23:54
// 맞았습니다!!
// 2032KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    vector<array<double, 2>> v(N, {0, 1});
    for (auto &e : v) cin >> e[0];
    while(v.size() > 1) {
      for(int i = 1; i < v.size(); ++i) {
        double x1 = v[i - 1][0];
        double x2 = v[i][0];
        double y1 = v[i - 1][1];
        double y2 = v[i][1];
        double t = (pow(x2 - x1, 2) + pow(y2 - y1, 2)) / 4;
        t = sqrt((4 - t) / t);
        v[i - 1] = {(x1 + x2) / 2 + t * (y1 - y2) / 2, (y1 + y2) / 2 + t * (x2 - x1) / 2};
      }
      v.pop_back();
    }
    cout << setprecision(4) << fixed << v[0][0] << " " << v[0][1] << '\n';
  }
}