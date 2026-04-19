// 2025년 3월 12일 15:28:02
// 맞았습니다!!
// 2028KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, mn = 1e4;
  string s, t = "BRONZESILVER";
  cin >> n >> s;
  map<char, int> a, b;
  for(auto e : s) {
    a[e]++;
  }
  for(auto e : t) {
    b[e]++;
  }
  for(auto e : b) {
    mn = min(mn, a[e.first] / e.second);
  }
  cout << mn;
}