// 2024년 12월 19일 23:06:43
// 맞았습니다!!
// 2020KB
// 8ms
#include <bits/stdc++.h>
using namespace std;

typedef long long l;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  l n, r = 0, p, t;
  cin >> n;
  for (l i = 0; i < n; i++) {
    t = 0;
    cin >> p;
    vector<array<l, 2>> v(p + 1);
    for (l j = 0; j < p; j++) {
      cin >> v[j][0] >> v[j][1];
    }
    v[p] = v[0];
    for (l j = 0; j < p; j++) {
      t += v[j][0] * v[j + 1][1] - v[j][1] * v[j + 1][0];
    }
    r += abs(t);
  }
  cout << r / 2;
}