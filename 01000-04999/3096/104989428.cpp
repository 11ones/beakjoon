// 2026년 4월 13일 16:04:29
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, M, x, y, c = 0;
  cin >> N >> M;
  vector<set<int>> v(N, set<int>());
  while (M--) {
    cin >> x >> y;
    v[x - 1].insert(y - 1);
  }
  for (int i = 0; i < N; ++i) {
    for (int j = i + 1; j < N; ++j) {
      vector<int> t(N + N);
      int l = set_intersection(v[i].begin(), v[i].end(), v[j].begin(), v[j].end(), t.begin()) - t.begin();
      c += l * (l - 1) / 2;
    }
  }
  cout << c;
}