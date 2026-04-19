// 2026년 2월 23일 05:36:15
// 맞았습니다!!
// 2288KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int T, N, M, x, y;
  cin >> T;
  for (int i = 1; i <= T; ++i) {
    cin >> N >> M;
    vector<set<int>> v(N + 1);
    while (M--) {
      cin >> x >> y;
      v[x].insert(y);
      v[y].insert(x);
    }
    cin >> x;
    cout << "Data Set " << i << ":\n";
    for (auto e : v[x]) cout << e << " ";
    cout << "\n\n";
  }
}