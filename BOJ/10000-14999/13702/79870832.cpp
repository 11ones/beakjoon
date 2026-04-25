// 2024년 6월 20일 23:38:45
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, k;

int binsrh(int s, int e, vector<int> &v) {
  int m = (s + e) / 2;
  if(s == m) {
    return m;
  }
  int x = 0;
  for(auto e : v) {
    x += e / m;
  }
  if(x >= k) {
    return binsrh(m, e, v);
  } else {
    return binsrh(s, m, v);
  }
}

int main() {
  cin >> n >> k;
  vector<int> v(n);
  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }
  cout << binsrh(0, 1'000'000, v);
}