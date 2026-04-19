// 2025년 10월 28일 14:35:17
// 틀렸습니다
// KB
// ms
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
    for (int j = 0; j < 35; ++j) {
      if (d[j]) {
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