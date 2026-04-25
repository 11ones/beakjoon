// 2026년 2월 23일 04:11:48
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, L, x;
  cin >> N >> L;
  vector<int> v(1001);
  while (N--) {
    cin >> x;
    ++v[x];
  }
  x = 0, --L;
  for (int i = 1; i < 1001; ++i) if (v[i]) ++x, i += L;
  cout << x;
}