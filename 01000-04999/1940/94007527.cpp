// 2025년 5월 7일 19:56:16
// 맞았습니다!!
// 2200KB
// 112ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, m, c = 0;
  cin >> n >> m;
  vector<int> v(n);
  for (int &e : v) cin >> e;
  sort(v.begin(), v.end());
  auto f = v.begin(), b = ++v.begin();
  while (f != v.end() && f < b) {
    if (b == v.end() || *f + *b > m) {
      ++f;
      b = f + 1;
    } else if (*f + *b < m)
      ++b;
    else {
      ++c;
      ++b;
    }
  }
  cout << c;
}