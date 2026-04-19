// 2026년 3월 22일 05:48:19
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

struct cmp {
  bool operator()(vector<long> a, vector<long> b) {
    int pa = -1, pb = -1;
    while (a[++pa] != 1) {}
    while (b[++pb] != 1) {}
    return pa < pb;
  }
};

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int T, N, c;
  cin >> T;
  while (T--) {
    c = 0;
    cin >> N;
    vector<vector<long>> v(N, vector<long>(N));
    for (auto &e : v) for (auto &f : e) cin >> f;
    sort(v.begin(), v.end(), cmp());
    vector<long> x(N);
    for (auto &e : x) cin >> e;
    for (int i = 0; i < N; ++i) {
      if (x[i] * v[i][i] >= 0 && !(abs(x[i]) % abs(v[i][i]))) {
        c += x[i] / v[i][i];
        for (int j = 0; j < N; ++j) {
          x[j] -= v[i][j];
        } 
        continue;
      }
      cout << "0\n";
      goto E;
    }
    cout << "1 " << c << "\n";
    E:;
  }
}