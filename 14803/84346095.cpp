// 2024년 9월 25일 23:09:11
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  for (int o = 1; o <= tc; o++) {
    int d, n, a, b;
    cin >> d >> n;
    double mx = 0;
    for (int i = 0; i < n; i++) {
      cin >> a >> b;
      mx = max(mx, (double)(d - a) / b);
    }
    cout << setprecision(6) << fixed << "Case #" << o << ": " << d / mx << '\n';
  }
}