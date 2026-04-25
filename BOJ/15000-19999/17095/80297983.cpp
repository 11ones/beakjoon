// 2024년 6월 30일 17:10:30
// 맞았습니다!!
// 3068KB
// 40ms
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }
  int mx = *max_element(v.begin(), v.end());
  int mn = *min_element(v.begin(), v.end());
  if(mx == mn) {
    cout << 1;
    return 0;
  }
  vector<int> a, b;
  for(int i = 0; i < n; i++) {
    if(v[i] == mx) {
      a.push_back(i);
    }
    if(v[i] == mn) {
      b.push_back(i);
    }
  }
  int d = n;
  for(auto e : a) {
    auto t = lower_bound(b.begin(), b.end(), e);
    if(t == b.begin()) {
      d = min(d, abs(e - *t));
      continue;
    }
    if(t == b.end()) {
      t--;
      d = min(d, abs(e - *t));
      continue;
    }
    d = min(d, abs(e - *t));
    t--;
    d = min(d, abs(e - *t));
  }
  cout << d + 1;
}