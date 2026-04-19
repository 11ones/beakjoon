// 2026년 1월 30일 23:05:20
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;
int main() {
  cin.tie(0)->sync_with_stdio(0);
  int T;
  cin >> T;
  map<char, int> m = {{'R', 0}, {'S', 1}, {'P', 2}, {'X', 3}};
  array<char, 3> a = {'R', 'S', 'P'};
  while (T--) {
    int N;
    cin >> N;
    vector<string> v(N);
    for (auto &e : v) cin >> e;
    int t, p;
    vector<int> c(4);
    for (int i = 0; i < v[0].size(); ++i) {
      p = 0;
      c = vector<int>(4);
      for (int j = 0; j < N; ++j) {
        ++c[m[v[j][i]]];
        if (v[j][i] != 'X') p = j;
      }
      if (!c[0] + !c[1] + !c[2] == 1) {
        t = (!c[0] ? 2 : (!c[1] ? 0 : 1));
        for (int j = 0; j < N; ++j) {
          if (v[j][i] == a[t])
            for (auto &e : v[j]) e = 'X';
        }
      }
    }
    cout << (c[3] == N - 1 ? p + 1 : 0) << "\n";
  E:;
  }
}