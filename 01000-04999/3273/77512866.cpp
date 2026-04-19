// 2024년 4월 26일 23:15:14
// 맞았습니다!!
// 2412KB
// 40ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, t;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  cin >> t;
  sort(v.begin(), v.end());
  auto ed = upper_bound(v.begin(), v.end(), t);
  if (ed == v.end()) {
    ed--;
  }
  auto st = v.begin();
  int cnt = 0;
  while (st < ed) {
    if (*st + *ed > t) {
      ed--;
      continue;
    }
    if (*st + *ed == t) {
      cnt++;
    }
    st++;
  }
  cout << cnt;
}