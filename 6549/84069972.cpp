// 2024년 9월 19일 23:01:40
// 맞았습니다!!
// 2920KB
// 36ms
#include <bits/stdc++.h>
using namespace std;
typedef long long l;


l dnc(vector<l> &v, l s, l e) {
  l mx = 0;
  if (s >= e) {
    return v[s];
  }
  l m = (s + e) / 2;
  l f = m, b = m;
  l h = v[m];
  while (f >= s && b <= e) {
    if (v[f] >= v[b]) {
      h = min(h, v[f--]);
    } else {
      h = min(h, v[b++]);
    }
    mx = max(mx, h * (b - f - 1));
  }
  while (f >= s) {
    h = min(h, v[f--]);
    mx = max(mx, h * (b - f - 1));
  }
  while (b <= e) {
    h = min(h, v[b++]);
    mx = max(mx, h * (b - f - 1));
  }
  mx = max(mx, dnc(v, s, m - 1));
  mx = max(mx, dnc(v, m + 1, e));
  return mx;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  while (1) {
    int n;
    cin >> n;
    if (!n) {
      return 0;
    }
    vector<l> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    cout << dnc(v, 0, v.size() - 1) << '\n';
  }
}