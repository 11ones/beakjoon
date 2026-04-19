// 2026년 4월 11일 05:20:04
// 컴파일 에러
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  long N, c = 0, r = 0;
  cin >> N;
  vector<long> v(N);
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