// 2025년 5월 7일 19:59:37
// 맞았습니다!!
// 2020KB
// 8ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, c = 0;
  cin >> n >> m;
  vector<int> v(n);
  for (int &e : v) cin >> e;
  sort(v.begin(), v.end());
  auto f = v.begin(), b = --v.end();
  while (f < b) {
    if (*f + *b > m) {
      --b;
    } else if (*f + *b < m)
      ++f;
    else {
      --b;
      ++f;
      ++c;
    }
  }
  cout << c;
}