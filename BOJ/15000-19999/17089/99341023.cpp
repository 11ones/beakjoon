// 2025년 10월 12일 00:34:11
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, a, b, mn = 1e9;
  cin >> N >> M;
  ++N;
  vector<set<int>> v(N, set<int>());
  vector<int> vst(N), f(N);
  while(M--) {
    cin >> a >> b;
    v[a].insert(b);
    v[b].insert(a);
    ++f[a], ++f[b];
  }
  for(int i = 1; i < N; ++i) {
    for(int j = 2; j < N; ++j) {
      for(int k = 3; k < N; ++k) {
        if(v[i].find(j) != v[i].end() && v[j].find(k) != v[j].end() && v[k].find(i) != v[k].end()) {
          mn = min(mn, f[i] + f[j] + f[k] - 6);
        }
      }
    }
  }
  cout << (mn > 1e8 ? -1 : mn);
}