// 2024년 12월 28일 13:26:26
// 맞았습니다!!
// 2208KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int l, d, n, c = 0;
  cin >> l >> d >> n;
  vector<int> v(n);
  if(!n) {
    cout << (l - 12) / d + 1;
    return 0;
  }
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  c += max((v[0] - 6) / d, 0);
  for (int i = 1; i < n; i++) {
    c += max((v[i] - v[i - 1]) / d - 1, 0);
  }
  c += max((l - v.back() - 6) / d, 0);
  cout << c;
}