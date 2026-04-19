// 2024년 9월 18일 15:59:32
// 런타임 에러 (PastTheEndIterator)
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int x, n;
  while (cin >> x) {
    x *= 10000000;
    cin >> n;
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