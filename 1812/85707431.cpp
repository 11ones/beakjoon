// 2024년 10월 27일 23:36:51
// 맞았습니다!!
// 2020KB
// 4ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  array<int, 999> a;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<int> v;
  for (int i = 0; i <= a[0]; i++) {
    v.push_back(a[0] - i);
    for (int j = 0; j < n - 1; j++) {
      if (a[j] - v.back() < 0) goto E;
      v.push_back(a[j] - v.back());
    }
    if (a[n - 1] - v.back() == v[0]) {
      for (int e : v) {
        cout << e << '\n';
      }
      return 0;
    }
  E:
    v.clear();
  }
}