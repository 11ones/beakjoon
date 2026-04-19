// 2025년 1월 6일 23:46:31
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  array<double, 2> s, f;
  int n, k, vmx;
  cin >> s[0] >> s[1] >> f[0] >> f[1] >> n >> k >> vmx;
  vector<array<int, 3>> v(n + 1);
  vector<array<double, 2>> r(k);
  for (int i = 0; i < n; i++) {
    cin >> v[i][2] >> v[i][0] >> v[i][1];
  }
  v[n] = {k, 0, 0};
  int p = 0, c = 0;
  for (int i = 0; i < k; i++) {
    if (i >= v[p + 1][2]) p++;
    s[0] += v[p][0];
    s[1] += v[p][1];
    double x = sqrt(pow(f[0] - s[0], 2) + pow(f[1] - s[1], 2));
    if (x < vmx || 5 - vmx < 1e-5) {
      for (; i < k; i++) {
        r[i] = f;
      }
      c = 1;
      break;
    }
    s[0] += (f[0] - s[0]) * vmx / x;
    s[1] += (f[1] - s[1]) * vmx / x;
    r[i] = s;
  }
  if (c) {
    cout << "Yes\n";
    for (auto e : r) {
      cout << e[0] << " " << e[1] << '\n';
    }
  } else {
    cout << "No";
  }
}