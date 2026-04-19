// 2025년 5월 7일 20:41:55
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for(int &e : v) cin >> e;
  sort(v.begin(), v.end());
  auto f = v.begin(), b = --v.end();
  int mn = abs(*f + *b), x = *f, y = *b;
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