// 2025년 4월 2일 21:05:11
// 100점
// 2760KB
// 44ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  long m, n, l, c = 0;
  cin >> m >> n >> l;
  vector<long> v(m);
  for(auto &e : v)cin >> e;
  sort(v.begin(), v.end());
  while(n--) {
    long x, y;
    cin >> x >> y;
    if(y > l) continue;
    auto t = lower_bound(v.begin(), v.end(), (x + y - l));
    if(t == v.end()) continue;
    if(*t <= (x - y + l)) ++c;
  }
  cout << c;
}