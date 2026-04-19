// 2025년 10월 29일 23:45:54
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  vector<int> v = {2};
  for (int i = 3; i * i < 1e6; ++i) {
    for (auto& e : v) {
      if (e * e > i) break;
      if (!(i % e)) goto E;
    }
    v.push_back(i);
  E:;
  }
  int a, b;
  while (1) {
    cin >> a >> b;
    if (a + b == 0) return 0;
    int sa, mxa, sb, mxb;
    sa = mxa = sb = mxb = 0;
    for (auto& e : v) {
      if (!(a % e)) {
        sa += e;
        mxa = e;
      }
    }
    for (auto& e : v) {
      if (!(b % e)) {
        sb += e;
        mxb = e;
      }
    }
    sa = mxa * 2 - sa;
    sb = mxb * 2 - sb;
    cout << (sa > sb ? "a\n" : "b\n");
  }
}