#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, M;
  cin >> N;
  vector<array<int, 2>> v(N);
  for (auto &e : v) cin >> e[0] >> e[1];
  cin >> M;
  vector<string> S(M);
  array<array<set<char>, 11>, 11> A;
  for (auto &e : S) {
    cin >> e;
    for (int i = 1; i <= e.length(); ++i) {
      A[e.length()][i].insert(e[i - 1]);
    }
  }
  for (auto e : S) {
    if (e.size() != N) {
      cout << "No\n";
      continue;
    }
    for (int i = 0; i < N; ++i) {
      if (A[v[i][0]][v[i][1]].find(e[i]) == A[v[i][0]][v[i][1]].end()) {
        cout << "No\n";
        goto E;
      }
    }
    cout << "Yes\n";
  E:;
  }
}