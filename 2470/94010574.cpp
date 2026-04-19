// 2025년 5월 7일 20:53:20
// 맞았습니다!!
// 2412KB
// 60ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for(int &e : v) cin >> e;
  sort(v.begin(), v.end());
  auto f = v.begin(), b = --v.end();
  int mn = 2e9, x, y;
  while(f < b) {
    if(mn >= abs(*f + *b)) {
      mn = abs(*f + *b), x = *f, y = *b;
    }
    if(*f + *b > 0) --b;
    else if(*f + *b < 0) ++f;
    else {
      cout << *f << " " << *b;
      return 0;
    }
  }
  cout << x << " " << y;
}