// 2024년 6월 2일 14:35:04
// 시간 초과
// KB
// ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, c;
  cin >> n >> c;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  int mx = 0;
  for (int i = 0; i < n - 1; i++) {
    for (int d = i + 1; d < n; d++) {
      auto t = v.begin() + i;
      bool chk = 1;
      for (int j = 1; j < c; j++) {
        t = lower_bound(t, v.end(), *t + v[d] - v[i]);
        if (t >= v.end()) {
          chk = 0;
          break;
        }
      }
      if (chk) {
        mx = max(mx, v[d] - v[i]);
      }
    }
  }
  cout << mx;
}