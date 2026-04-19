// 2025년 4월 2일 19:54:45
// 맞았습니다!!
// 2032KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

struct cmp {
  bool operator()(string a, string b) {
    if (a.length() != b.length()) return a.length() < b.length();
    int ta = 0, tb = 0;
    for (auto e : a) {
      if (e >= '0' && e <= '9') ta += e - '0';
    }
    for (auto e : b) {
      if (e >= '0' && e <= '9') tb += e - '0';
    }
    if (ta != tb) return ta < tb;
    return a < b;
  }
};

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  vector<string> v(n);
  for (auto &e : v) cin >> e;
  sort(v.begin(), v.end(), cmp());
  for (auto e : v) {
    cout << e << '\n';
  }
}