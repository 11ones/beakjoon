#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int H, W, Q;
  cin >> H >> W >> Q;
  while (Q--) {
    int a, x;
    cin >> a >> x;
    if (a == 1) {
      cout << x * W << '\n';
      H -= x;
    } else {
      cout << x * H << '\n';
      W -= x;
    }
  }
}