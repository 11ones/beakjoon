// 2024년 8월 15일 16:26:43
// 맞았습니다!!
// 2028KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  char s[4] = {'A', 'B', 'C', 'D'};
  int n, m;
  cin >> n >> m;
  map<char, vector<pair<char, double>>> p;
  map<char, double> v, tv;
  for (int i = 0; i < m; i++) {
    char a, b;
    double c;
    cin >> a >> b >> c;
    p[a].push_back({b, c});
  }
  for (auto c : s) {
    v[c] = 0.25;
  }
  for (int o = 0; o < n; o++) {
    for (auto c : s) {
      tv[c] = 0;
    }
    for (auto c : s) {
      for (auto e : p[c]) {
        tv[e.first] += v[c] * e.second;
      }
    }
    v = tv;
  }
  for (auto c : s) {
    cout << setprecision(2) << fixed << v[c] * 100 << '\n';
  }
}