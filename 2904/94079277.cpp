// 2025년 5월 9일 14:52:32
// 맞았습니다!!
// 2992KB
// 52ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x, c = 0;
  cin >> n;
  vector<int> p = {2};
  map<int, vector<int>> m;
  for (int i = 3; i < 1e6; ++i) {
    for (int e : p) {
      if(e * e > i) break;
      if (!(i % e)) goto E;
    }
    p.push_back(i);
  E:;
  }
  for (int i = 0; i < n; ++i) {
    cin >> x;
    while (x != 1) {
      for (int e : p) {
        if (!(x % e)) {
          if(m[e].empty()) {
            m[e] = vector<int>(n);
          }
          ++m[e][i];
          x /= e;
          break;
        }
      }
    }
  }
  x = 1;
  for(auto e : m) {
    int s = 0, d, r, t = 0;
    for(int f : e.second) {
      s += f;
    }
    d = s / n, r = s % n;
    for(int f : e.second) {
      if(f > d) t += f - d;
    }
    x *= pow(e.first, d);
    c += t - r;
  }
  cout << x << " " << c;
}