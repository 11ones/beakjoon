// 2024년 4월 11일 23:45:45
// 틀렸습니다
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
  for (int f = 0; f < n - c; f++) {
    bool check = 0;
    for (int i = 1; i < n; i++) {
      auto t = v.begin() + i + f;
      int d = *t - v[f];
      for (int j = 2; j < c; j++) {
        t = lower_bound(t, v.end(), *t + d);
        if (t > v.end() - 1) {
          check = 1;
          break;
        }
        mx = max(mx, d);
      }
      if (check)
        break;
    }
    if(mx != 0) {
      break;
    }
  }
  cout << mx;
}