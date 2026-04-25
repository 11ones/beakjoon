// 2025년 10월 28일 14:36:50
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int f[5] = {4, 11, 18, 25, 32};
  int N, x;
  cin >> N;
  vector<int> d(35);
  d[0] = 1;
  for (int i = 0; i < N; ++i) {
    cin >> x;
    auto td = d;
    for (int j = 0; j < 35; ++j) {
      if (td[j]) {
        d[(j + x) % 35] = 1;
      }
    }
    for (auto e : f) {
      if (d[e]) {
        cout << "YES";
        return 0;
      }
    }
  }
  cout << "NO";
}