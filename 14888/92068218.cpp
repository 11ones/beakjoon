// 2025년 3월 26일 21:16:55
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int n, mx = -1e9, mn = 1e9, o;
vector<int> v, c(4), vst(4);

void f(int x, int d) {
  if (d == n) {
    mx = max(mx, x);
    mn = min(mn, x);
    return;
  }
  for (int i = 0; i < 4; i++) {
    if (vst[i] == c[i]) continue;
    vst[i]++;
    switch (i) {
      case 0:
        f(x + v[d], d + 1);
        break;
      case 1:
        f(x - v[d], d + 1);
        break;
      case 2:
        f(x * v[d], d + 1);
        break;
      case 3:
        f(x / v[d], d + 1);
        break;
    }
    vst[i]--;
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> o;
    v.push_back(o);
  }
  for (int &e : c) cin >> e;
  f(v[0], 1);
  cout << mx << "\n" << mn;
}