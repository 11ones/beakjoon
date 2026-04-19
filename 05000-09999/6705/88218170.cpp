// 2025년 1월 5일 18:51:57
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  string s, r;
  cin >> n;
  while (n--) {
    cin.ignore(99, '\n');
    getline(cin, s);
    cin >> m >> r;

    array<int, 10> a{};
    int c = 0, b = 0;
    while (c < m) {
      cin.ignore(99, '\n');
      char x = cin.peek();
      int f, l, d = 1;
      if (x == '+') {
        cin >> x >> f >> l >> d;
      } else {
        cin >> f;
        l = f;
      }
      for (; f <= l; f += d) {
        int t = f;
        while (t) {
          a[t % 10]++;
          t /= 10;
        }
        c++;
      }
    }
    cout << s << '\n' << m << ' ' << r << '\n';
    for (int i = 0; i < 10; i++) {
      cout << "Make " << a[i] << " digit " << i << '\n';
      b += a[i];
    }
    cout << "In total " << b << " digit" << (b == 1 ? "" : "s") <<"\n";
  }
}