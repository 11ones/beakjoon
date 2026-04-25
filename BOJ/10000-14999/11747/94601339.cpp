// 2025년 5월 21일 19:05:09
// 맞았습니다!!
// 2156KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int& e : v) cin >> e;
  set<int> s;
  for (int i = 1; i <= min(5, n); ++i) {
    for (int j = 0; j < n; ++j) {
      int t = 0;
      for (int k = j; k < min(j + i, n); ++k) {
        t = t * 10 + v[k];
        s.insert(t);
      }
    }
  }
  int t = 0;
  for(auto e : s) {
    if(t != e) {
      cout << t;
      return 0;
    }
    ++t;
  }
  cout << *--s.end() + 1;
}