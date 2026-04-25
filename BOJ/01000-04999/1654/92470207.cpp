// 2025년 4월 2일 20:37:51
// 맞았습니다!!
// 2220KB
// 4ms
#include <bits/stdc++.h>
using namespace std;

long l(vector<long>& v, long f, long b, long x) {
  if(f + 1 >= b) {
    return f;
  }
  long m = (f + b) / 2, s = 0;
  for(auto e : v) {
    s += e / m;
  }
  if(x > s) {
    return l(v, f, m, x);
  } else {
    return l(v, m, b, x);
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int k, n;
  cin >> k >> n;
  vector<long> v(k);
  for(auto &e : v) cin >> e;
  cout << l(v, 1, 1e12, n);
}