// 2024년 7월 15일 23:31:09
// 틀렸습니다
// KB
// ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
typedef pair<int, int> p;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n;
  cin >> n;
  vector<int> a;
  vector<p> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i].first >> v[i].second;
  }
  sort(v.begin(), v.end());
  for (auto e : v) {
    auto t = lower_bound(a.begin(), a.end(), e.first);
    if (a.empty() || t == a.begin() && *t > e.first) {
      a.push_back(e.second);
    } else {
      if(t == a.end()) {
        t--;
      }
      *t = e.second;
    }
    sort(a.begin(), a.end());
  }
  cout << a.size();
}