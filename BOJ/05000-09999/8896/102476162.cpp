// 2026년 1월 30일 22:42:41
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;
int main() {
  cin.tie(0)->sync_with_stdio(0);
  int T;
  cin >> T;
  map<char, int> m = {{'X', 0}, {'R', 1}, {'S', 2}, {'P', 3}};
  array<char, 3> a = {'R', 'S', 'P'};
  while (T--) {
    int N;
    cin >> N;
    vector<string> v(N);
    for (auto &e : v) cin >> e;
    int l = v[0].size();
    for (int i = 0; i < l; ++i) {
      int p = 0;
      vector<int> c(4);
      for (int j = 0; j < N; ++j) {
        ++c[m[v[j][i]]];
        if (v[j][i] != 'X') p = j;
      }
      if (!c[1] + !c[2] + !c[3] == 1) {
        p = (!c[1] ? 2 : (!c[2] ? 0 : 1));
        for (int j = 0; j < N; ++j) {
          if (v[j][i] == a[p])
            for (auto &e : v[j]) e = 'X';
        }
      }
      if (c[0] == N - 1) {
        cout << p + 1 << '\n';
        goto E;
      }
    }
    cout << "0\n";
  E:;
  }
}