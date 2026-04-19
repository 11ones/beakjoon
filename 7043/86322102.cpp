// 2024년 11월 11일 23:25:40
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, t, c = 0, e = 1;
  cin >> n >> t;
  vector<pair<int, int>> v(n);
  for(int i = 0; i < n; i++) {
    cin >> v[i].first >> v[i].second;
  }
  sort(v.begin(), v.end());

  for(int i = 0; i < n; i++) {
    int mx = 0, mxp = 0;
    for(int j = i; v[j].first <= e; j++) {
      if(mx < v[j].second) {
        mx = v[j].second;
        mxp = j;
      }
    }
    c++;
    e = mx;
    i = mxp;
  }
  cout << (e >= t ? c : -1);
}