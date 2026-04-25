// 2026년 3월 17일 13:16:39
// 맞았습니다!!
// 41084KB
// 160ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int mx = 5000001, N, p = 0;
  vector<long> v(mx, 1);
  for (int i = 2; i < mx; ++i) {
    if(v[i]) {
      ++p;
      for(int j = 2; j * i < mx; ++j) v[j * i] = 0;
    }
    v[i] = p;
  }
  cin >> N;
  vector<array<int, 2>> u(4);
  u[1] = {1, 0};
  u[2] = {0, 2};
  if (N < 3) {
    cout << u[N][0] << " " << u[N][1];
    return 0;
  }
  cout << N - v[N] * 2 + 1 << " " << v[N] * 2 - 1;
}