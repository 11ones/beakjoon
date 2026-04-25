#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, M, x, y;
  cin >> N >> M;
  vector<int> v(M);
  while (N--) {
    cin >> x >> y;
    --v[--x];
    ++v[--y];
  }
  for (int e : v) cout << e << '\n';
}