// 2024년 12월 16일 23:40:06
// 컴파일 에러
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, mx = 0;
  cin >> n;
  vector<int> v(n);
  for (auto &e : v) {
    cin >> e;
    mx += e;
  }
  unordered_set<int> s{0};
  int mx = 0;
  for (auto e : v) {
    vector<int> tv;
    for (auto f : s) {
      tv.push_back(f + e);
    }
    s.insert(tv.begin(), tv.end());
  }
  mx++;
  auto ts = s.end();
  long long sum = 0;
  for (auto e : s) {
    sum += mx - e;
  }
  cout << sum * 2 - (long long)s.size() * (s.size() + 1) / 2;
}