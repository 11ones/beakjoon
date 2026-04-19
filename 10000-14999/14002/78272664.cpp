// 2024년 5월 13일 15:50:44
// 틀렸습니다
// KB
// ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n), lis, t;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  for (auto ev : v) {
    if (lis.empty()) {
      lis.push_back(ev);
      t = lis;
      continue;
    }
    if(ev < lis[0]) {
      lis[0] = ev;
      continue;
    }
    auto it = upper_bound(lis.begin(), lis.end(), ev);
    if (it == lis.end()) {
      lis.push_back(ev);
      t = lis;
      continue;
    }
    if(*(it - 1) == ev) {
      continue;
    }
    *it = ev;
  }
  cout << t.size() << '\n';
  for(auto e : t) {
    cout << e << " ";
  }
}