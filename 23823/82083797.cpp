// 2024년 8월 5일 22:26:38
// 맞았습니다!!
// 2256KB
// 24ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, q, t, a;
  cin >> n >> q;
  vector<int> r(n), c(n);
  int rmx = 0, rmxc = n, cmx = 0, cmxc = n;
  for (int i = 0; i < q; i++) {
    cin >> t >> a;
    a--;
    if (t == 1) {
      if (rmx < ++r[a]) {
        rmx = r[a];
        rmxc = 1;
      } else if (rmx == r[a]) {
        rmxc++;
      }
    } else {
      if (cmx < ++c[a]) {
        cmx = c[a];
        cmxc = 1;
      } else if (cmx == c[a]) {
        cmxc++;
      }
    }
    cout << rmxc * cmxc << '\n';
  }
}