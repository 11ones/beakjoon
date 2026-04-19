// 2024년 8월 15일 16:45:13
// 맞았습니다!!
// 2028KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int x, n;
  cin >> x >> n;
  vector<pair<double, char>> v;
  map<char, int> m;
  for (int i = 0; i < n; i++) {
    char a;
    int b;
    cin >> a >> b;
    if (b * 20 >= x) {
      m[a] = 0;
      for (int j = 1; j < 15; j++) {
        v.push_back({b / j, a});
      }
    }
  }
  sort(v.begin(), v.end(), greater<>());
  for(int i = 0; i < 14; i++) {
    m[v[i].second]++;
  }
  for(auto e : m) {
    cout << e.first << " " << e.second << '\n';
  }
}