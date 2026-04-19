// 2024년 11월 11일 23:34:26
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, t, c = 0, e = 1;
  cin >> n >> t;
  vector<pair<int, int>> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i].first >> v[i].second;
  }
  sort(v.begin(), v.end());
  for (int i = 0; i < n; i++) {
    int mx = 0, mxp = 0;
    for (int j = i; v[j].first <= e && j < n; j++) {
      if (mx < v[j].second) {
        mx = v[j].second;
        mxp = j;
      }
    }
    if (mx) {
      c++;
      e = mx + 1;
      i = mxp;
    }
  }
  cout << (e == t + 1 ? c : -1);
}