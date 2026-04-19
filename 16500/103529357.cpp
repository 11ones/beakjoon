// 2026년 3월 5일 12:51:34
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  string s;
  int N;
  cin >> s >> N;
  vector<string> v(N);
  vector<int> d(s.size() + 1);
  d[0] = 1;
  for (auto &e : v) cin >> e;
  for (int i = 0; i < s.size(); ++i) {
    if (d[i])
      for (auto e : v)
        if (e == s.substr(i, e.size())) d[i + e.size()] = 1;
  }
  cout << d[s.size()];
}