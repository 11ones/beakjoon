// 2024년 9월 18일 15:05:43
// 32점
// 2940KB
// 64ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<pair<int, int>> v(n);
  vector<bool> t(n);
  for (int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;
  sort(v.begin(), v.end(), greater<>());
  for(int i = 0; i < n; i++) {
    if(t[i]) continue;
    for(int j = i + 1; j < n; j++) {
      if(t[j]) continue;
      if(v[i].first >= v[j].first && v[i].second >= v[j].second) {
        t[j] = 1;
      }
    }
  }
  int c = 0;
  for(auto e : t) {
    c += 1 - e;
  }
  cout << c;
}