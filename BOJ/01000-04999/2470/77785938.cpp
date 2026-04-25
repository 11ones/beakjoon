// 2024년 5월 2일 23:08:28
// 틀렸습니다
// KB
// ms
#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;

int main() {
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
  int mn = 2000'000'000;
  int tp = 0, tm = 0;
  sort(p.begin(), p.end());
  sort(m.begin(), m.end());
  if (p.empty()) {
    cout << *(m.end() - 1) << " " << ++m.back();
    return 0;
  }
  if (m.empty()) {
    cout << p.front() << " " << *(p.begin() + 1);
    return 0;
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
    cout << *itp << ' ' << *itm << "\n";
  }
  cout << tm << " " << tp;
}