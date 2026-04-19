// 2026년 3월 20일 04:33:43
// 100점
// 5928KB
// 16ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, mx = 0, t, x;
  cin >> N;
  vector<int> d(1000001);
  for (int i = 0; i < N; ++i) {
    cin >> x;
    d[x] = max(d[x], d[x - 1] + 1);
  }
  cout << *max_element(d.begin(), d.end());
}