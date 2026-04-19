// 2024년 9월 18일 14:18:38
// 맞았습니다!!
// 2804KB
// 76ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, q, p = 0;
  cin >> n >> q;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  for (int i = 0; i < q; i++) {
    int a, b, c;
    cin >> a;
    switch (a) {
      case 1:
        cin >> b >> c;
        v[(b + p - 1) % n] += c;
        break;
      case 2:
        cin >> b;
        p = (p - b + n) % n;
        break;
      case 3:
        cin >> b;
        p = (p + b) % n;
    }
  }
  for (int i = 0; i < n; i++) {
    cout << v[(i + p) % n] << " ";
  }
}