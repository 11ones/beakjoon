// 2024년 9월 18일 16:04:59
// 맞았습니다!!
// 6048KB
// 972ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int x, n;
  while (cin >> x) {
    x *= 10000000;
    cin >> n;
    if (!n) {
      cout << "danger\n";
      continue;
    }
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    sort(v.begin(), v.end());
    auto f = v.begin(), b = v.end();
    b--;
    while (f < b) {
      if (*f + *b == x) {
        break;
      }
      if(*f + *b > x) {
        b--;
      } else {
        f++;
      }
    }
    if (f < b) {
      cout << "yes " << *f << " " << *b << '\n';
    } else {
      cout << "danger\n";
    }
  }
}