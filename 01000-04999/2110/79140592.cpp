// 2024년 6월 2일 15:02:36
// 시간 초과
// KB
// ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, c;
  cin >> n >> c;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  int mx = 1;
  for (int i = 0; i <= n - c; i++) {
    auto t = v.begin() + i;
    auto d = lower_bound(t, v.end(), *t + mx);
    while (d <= v.begin() + n - c + 1) {
      t = v.begin() + i;
      bool chk = 1;
      for (int j = 1; j < c; j++) {
        t = lower_bound(t, v.end(), *t + *d - v[i]);
        if (t >= v.end()) {
          chk = 0;
          break;
        }
      }
      if (chk) {
        mx = *d - v[i];
      }
      d++;
    }
  }
  cout << mx;
}