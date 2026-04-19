// 2024년 9월 18일 16:17:53
// 맞았습니다!!
// 2448KB
// 460ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  for (int o = 0; o < tc; o++) {
    int n, chk = 1;
    cin >> n;
    vector<pair<string, int>> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i].first;
      v[i].second = v[i].first.length();
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        if (v[i].second > v[j].second) {
          break;
        }
        if(v[i].first == v[j].first.substr(0, v[i].second)){
          chk = 0;
          break;
        }
      }
      if(!chk) break;
    }
    cout << (chk ? "YES\n" : "NO\n");
  }
}