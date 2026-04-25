// 2024년 11월 6일 23:40:07
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;
  while (T--) {
    int n, w;
    cin >> n >> w;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i].first >> v[i].second;
    }
    vector<int> d(w + 1);
    for (auto e : v) {
      for (int i = e.first; i <= w; i++) {
        if (d[i - e.first]) {
          d[i] = max(d[i], d[i - e.first] + e.second);
        }
      }
      d[e.first] = max(d[e.first], e.second);
    }
    cout << *max_element(d.begin(), d.end()) << '\n';
  }
}