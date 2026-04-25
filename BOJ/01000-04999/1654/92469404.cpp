// 2025년 4월 2일 20:27:30
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

long l(vector<int>& v, int f, int b, long x) {
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
  vector<int> v(k);
  for(int &e : v) cin >> e;
  cout << l(v, 1, 1e6, n);
}