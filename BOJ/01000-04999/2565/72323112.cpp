// 2024년 1월 24일 23:20:07
// 맞았습니다!!
// 2024KB
// 0ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  vector<pair<int, int>> v;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    v.push_back({a, b});
  }
  sort(v.begin(), v.end());
  vector<int> b, dpb;
  b.push_back(1);
  dpb.push_back(v[0].second);
  for (int i = 1; i < n; i++) {
    if (dpb.back() < v[i].second) {
      dpb.push_back(v[i].second);
      b.push_back(b.back() + 1);
    } else if (dpb.front() > v[i].second) {
      dpb[0] = v[i].second;
      b.push_back(1);
    } else {
      int p = lower_bound(dpb.begin(), dpb.end(), v[i].second) - dpb.begin();
      dpb[p] = v[i].second;
      b.push_back(p + 1);
    }
  }
  cout << n - dpb.size();
}