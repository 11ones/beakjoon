// 2026년 3월 28일 04:10:19
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  vector<int> v;
  for (int i = 2; i < 1100; ++i) {
    for (auto e : v) {
      if (e * e > i) break;
      if (!(i % e)) goto E;
    }
    v.push_back(i);
  E:;
  }
  int A, B, C, D;
  cin >> A >> B >> C >> D;
  A = lower_bound(v.begin(), v.end(), A) - v.begin();
  B = upper_bound(v.begin(), v.end(), B) - v.begin();
  C = lower_bound(v.begin(), v.end(), C) - v.begin();
  D = upper_bound(v.begin(), v.end(), D) - v.begin();
  A = B - A, D = D - C;
  if (B > C && (B - C) % 2) --D;
  cout << (A > D ? "yt" : "yj");
}