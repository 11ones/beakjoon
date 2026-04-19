// 2024년 6월 2일 14:28:53
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
  if (c == 2) {
    cout << v.back() - v.front();
    return 0;
  }
  int mx = 0;
  for (int d = 1; d < n; d++) {
    auto t = v.begin();
    bool chk = 1;
    for (int j = 1; j < c; j++) {
      t = lower_bound(t, v.end(), *t + d);
      if (t >= v.end()) {
        chk = 0;
        break;
      }
    }
    if (chk) {
      mx = d;
    }
  }
  cout << mx;
}