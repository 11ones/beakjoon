// 2026년 3월 9일 15:17:23
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, x;
  cin >> N;
  vector<int> d, v;
  while (N--) {
    cin >> x;
    auto t = upper_bound(d.begin(), d.end(), x);
    if (d.empty() || t == d.end()) {
      d.push_back(x);
      v = d;
    } else
      *t = x;
  }
  cout << v.size() << '\n';
  for (int e : v) cout << e << " ";
}