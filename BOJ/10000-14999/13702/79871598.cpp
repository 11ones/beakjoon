// 2024년 6월 20일 23:56:10
// 맞았습니다!!
// 2020KB
// 8ms
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long l;
l n, k;

int binsrh(l s, l e, vector<l> &v) {
  int m = (s + e) / 2;
  if(s > e) {
    return m;
  }
  int x = 0;
  for(auto e : v) {
    x += e / m;
  }
  if(x >= k) {
    return binsrh(m + 1, e, v);
  } else {
    return binsrh(s, m - 1, v);
  }
}

int main() {
  cin >> n >> k;
  vector<l> v(n);
  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }
  cout << binsrh(0, 2'147'483'647, v);
}