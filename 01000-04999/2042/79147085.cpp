// 2024년 6월 2일 17:32:24
// 틀렸습니다
// KB
// ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;

ll init(vl &v, vl &seg, int s, int e, int x) {
  if (s == e) {
    return seg[x] = v[s];
  }
  int m = (s + e) / 2;
  return seg[x] = init(v, seg, s, m, x * 2) + init(v, seg, m + 1, e, x * 2 + 1);
}

ll sum(vl &seg, int s, int e, int l, int r, int x) {
  if (l > e || r < s) {
    return 0;
  }
  if (l <= s && r >= e) {
    return seg[x];
  }
  int m = (s + e) / 2;
  return sum(seg, s, m, l, r, x * 2) + sum(seg, m + 1, e, l, r, x * 2 + 1);
}

void update(vl &seg, int s, int e, int t, int x, ll dif) {
  if (t < s || t > e) {
    return;
  }
  seg[x] += dif;
  if (s != e) {
    int m = (s + e) / 2;
    update(seg, s, m, t, x * 2, dif);
    update(seg, m + 1, e, t, x * 2 + 1, dif);
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m, k;
  cin >> n >> m >> k;
  vl v(n), seg(4 * n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  init(v, seg, 0, n - 1, 1);
  for (int i = 0; i < m + k; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    if (a == 1) {
      update(seg, 0, n - 1, b - 1, 1, c - v[b - 1]);
      v[b - 1] = c;
      continue;
    }
    cout << sum(seg, 0, n - 1, b - 1, c, 1) << '\n';
  }
}