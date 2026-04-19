// 2025년 10월 12일 00:31:37
// 메모리 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, a, b, mn = 1e9;
  cin >> N >> M;
  ++N;
  vector<map<int, int>> v(N, map<int, int>());
  vector<int> vst(N), f(N);
  while(M--) {
    cin >> a >> b;
    v[a][b] = v[b][a] = 1;
    ++f[a], ++f[b];
  }
  for(int i = 1; i < N; ++i) {
    for(int j = 2; j < N; ++j) {
      for(int k = 3; k < N; ++k) {
        if(v[i][j] + v[j][k] + v[k][i] == 3) {
          mn = min(mn, f[i] + f[j] + f[k] - 6);
        }
      }
    }
  }
  cout << (mn > 1e8 ? -1 : mn);
}