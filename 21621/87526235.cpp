// 2024년 12월 16일 23:31:18
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<int> v(n);
  for (auto &e : v) {
    cin >> e;
  }
  set<int> s{0};
  for (auto e : v) {
    auto t = s;
    for (auto f : s) {
      t.insert(f + e);
    }
    s = t;
  }
  auto ts = s.end();
  long long sum = 0, mx = *(--ts) + 1;
  for (auto e : s) {
    sum += mx - e;
  }
  cout << sum * 2 - s.size() * (s.size() + 1) / 2;
}