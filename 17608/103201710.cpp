// 2026년 2월 23일 03:50:01
// 맞았습니다!!
// 2412KB
// 12ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N;
  cin >> N;
  vector<int> v(N);
  for (auto &e : v) cin >> e;
  for (int i = N - 2; i >= 0; --i) {
    v[i] = max(v[i], v[i + 1]);
  }
  cout << unique(v.begin(), v.end()) - v.begin();
}