// 2024년 10월 18일 23:08:14
// 맞았습니다!!
// 2156KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

array<pair<bool, bool>, 31> in{};
array<bool, 31> ln{};
int n, m, v, g, c, x, mn;

vector<pair<int, int>> f(int p) {
  vector<pair<int, int>> t;
  if (p > (m - 1) / 2) {
    t.push_back({ln[p], 0});
  } else {
    auto a = f(p * 2), b = f(p * 2 + 1);
    for (auto e : a) {
      for (auto ee : b) {
        if (in[p].second == 1 || !in[p].first) t.push_back({e.first || ee.first, e.second + ee.second + in[p].first});
        if (in[p].second == 1 || in[p].first) t.push_back({e.first && ee.first, e.second + ee.second + !in[p].first});
      }
    }
  }
  return t;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n;
  for (int o = 1; o <= n; o++) {
    cin >> m >> v;
    for (int i = 1; i <= (m - 1) / 2; i++) {
      cin >> g >> c;
      in[i] = {g, c};
    }
    for (int i = (m + 1) / 2; i <= m; i++) {
      cin >> x;
      ln[i] = x;
    }
    mn = 100;
    for(auto e : f(1)) {
      if(e.first == v) {
        mn = min(mn, e.second);
      }
    }
    cout << "Case #" << o << ": " << (mn == 100 ? "IMPOSSIBLE" : to_string(mn)) << '\n';
  }
}