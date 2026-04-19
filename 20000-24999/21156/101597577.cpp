// 2026년 1월 4일 21:36:32
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int N, M;
  cin >> N >> M;
  vector<int> v(N), p(N);
  for (int i = 0; i < N; ++i) {
    v[i] = p[i] = i;
  }
  while (M--) {
    string a, b;
    cin >> a >> b;
    int x = p[a[1] - '1'], y = p[b[1] - '1'];
    if (x > y) {
      for (int i = y; i < x; ++i) {
        v[i] = v[i + 1];
        p[v[i]] = i;
      }
      v[x] = b[1] - '1';
      p[b[1] - '1'] = x;
    }
  }
  for (auto e : v) {
    cout << "T" << e + 1 << ' ';
  }
}