// 2025년 4월 8일 17:20:39
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  bool chk = 1;
  int n, r, s, t;
  cin >> n;
  vector<vector<int>> v(n, vector<int>(n));
  r = n * (n * n + 1) / 2;
  for(auto &e : v) {
    for (int &f : e) {
      cin >> f;
    }
  }
  for(int i = 0; i < n; ++i) {
    s = t = 0;
    for(int j = 0; j < n; ++j) {
      s += v[i][j];
      t += v[j][i];
    }
    if(s != r || t!= r) {
      chk = 0;
      break;
    }
  }
  s = t = 0;
  for(int i = 0; i < n; ++i) {
    s += v[i][i];
    t += v[n - i - 1][i];
  }
  if(s != r || t!= r) {
    chk = 0;
  }
  cout << (chk ? "TRUE" : "FALSE");
}