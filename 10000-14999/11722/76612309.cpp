// 2024년 4월 8일 23:23:06
// 맞았습니다!!
// 2020KB
// 0ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, x;
  cin >> n;
  vector<int> v, t;
  for (int i = 0; i < n; i++) {
    cin >> x;
    v.push_back(x);
  }
  t.push_back(v[n - 1]);
  for(int i = n - 2; i >= 0; i--) {
    auto p = lower_bound(t.begin(), t.end(), v[i]);
    if(p != t.end()) {
      *p = v[i];
      continue;
    }
    t.push_back(v[i]);
  }
  cout << t.size();
}