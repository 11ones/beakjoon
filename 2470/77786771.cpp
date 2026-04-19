// 2024년 5월 2일 23:23:42
// 맞았습니다!!
// 2920KB
// 16ms
#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, x;
  cin >> n;
  vector<int> p = {}, m = {};
  for (int i = 0; i < n; i++) {
    cin >> x;
    if (x > 0)
      p.push_back(x);
    else
      m.push_back(x);
  }
  int mn = 2000'000'001;
  int tp = 0, tm = 0;
  sort(p.begin(), p.end());
  sort(m.begin(), m.end());
  if (m.size() > 1) {
    tp = m.back();
    tm = *(m.end() - 2);
    mn = -tm - tp;
  }
  if (p.size() > 1) {
    if (mn > p.front() + *(p.begin() + 1)) {
      tp = *(p.begin() + 1);
      tm = p.front();
      mn = tp + tm;
    }
  }
  auto itp = p.rbegin();
  auto itm = m.begin();
  while (itp != p.rend() && itm != m.end()) {
    if (mn > abs(*itp + *itm)) {
      mn = abs(*itp + *itm);
      tp = *itp;
      tm = *itm;
    }
    if (*itp + *itm <= 0)
      itm++;
    else
      itp++;
  }
  cout << tm << " " << tp;
}