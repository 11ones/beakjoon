// 2024년 8월 6일 23:26:12
// 맞았습니다!!
// 2156KB
// 8ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  int m, l;
  cin >> s >> m;
  l = s.length();
  vector<pair<string, int>> v(m);
  int *d = new int[l];
  for (int i = 0; i < l; i++) {
    d[i] = i + 1;
  }

  for (int i = 0; i < m; i++) {
    cin >> v[i].first >> v[i].second;
  }

  for (int i = 0; i < l; i++) {
    for (auto e : v) {
      auto ef = e.first;
      int es = e.second;
      int el = ef.length();
      if (el > i + 1) {
        continue;
      }
      if (d[i] < d[i - el] + es && s.substr(i - el + 1, el) == ef) {
        d[i] = d[i - el] + es;
        for (int j = i; j < l; j++) {
          d[j] = max(d[j], d[i] + j - i);
        }
      }
    }
  }
  cout << d[l - 1];
}