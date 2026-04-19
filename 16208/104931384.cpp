// 2026년 4월 11일 05:19:34
// 4점
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, c = 0, r = 0;
  cin >> N;
  vector<int> v(N);
  for (int &e : v) {
    cin >> e;
    c += e;
  }
  sort(v.begin(), v.end());
  for (int i = N - 1; i > 0; --i) {
    c -= v[i];
    r += c * v[i];
  }
  cout << r;
}