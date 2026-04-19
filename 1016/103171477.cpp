// 2026년 2월 22일 02:45:51
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  vector<long> v = {2};
  for (int i = 3; i < 1000000; ++i) {
    for (long e : v) {
      if (e * e > i) break;
      if (!(i % e)) goto E;
    }
    v.push_back(i);
  E:;
  }
  for (long &e : v) e *= e;
  long A, B, c = 0;
  cin >> A >> B;
  for (int i = A; i <= B; ++i) {
    for (long e : v) {
      if (e > i) break;
      if (!(i % e)) goto F;
    }
    ++c;
  F:;
  }
  cout << c;
}