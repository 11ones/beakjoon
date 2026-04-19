// 2026년 3월 16일 17:26:15
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  vector<int> v;
  for (int i = 2; i < 5000000; ++i) {
    for (int &e : v) {
      if (i < e * e) break;
      if (!(i % e)) goto E;
    }
    v.push_back(i);
  E:;
  }
  int N;
  cin >> N;
  vector<array<int, 2>> u(3);
  u[1] = {1, 0};
  u[2] = {0, 2};
  if (N < 3) {
    cout << u[N][0] << " " << u[N][1];
    return 0;
  }
  int t = upper_bound(v.begin(), v.end(), N) - v.begin();
  cout << N - t * 2 + 1 << " " << t * 2 - 1;
}