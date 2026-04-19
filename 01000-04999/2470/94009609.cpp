// 2025년 5월 7일 20:34:30
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, mn, x, y;
  cin >> n;
  vector<int> v(n);
  for(int &e : v) cin >> e;
  sort(v.begin(), v.end());
  if(v.back() < 0) {
    cout << v[n - 1] << " " << v[n - 2];
    return 0;
  }
  if(v.front() > 0) {
    cout << v[0] << " " << v[1];
    return 0;
  }
  auto f = v.begin(), b = --v.end();
  mn = abs(*f + *b);
  x = *f;
  y = *b;
  while(f < b) {
    if(*f + *b > 0) --b;
    else if(*f + *b < 0) ++f;
    else {
      cout << *f << " " << *b;
      return 0;
    }
    if(mn > abs(*f + *b)) {
      mn = abs(*f + *b);
      x = *f;
      y = *b;
    }
  }
  cout << x << " " << y;
}