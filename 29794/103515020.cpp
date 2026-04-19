// 2026년 3월 4일 22:35:31
// 맞았습니다!!
// 2020KB
// 52ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, M, K, x;
  cin >> N >> M >> K;
  vector<int> v(201), u(201, -1);
  for (int i = 1; i <= N; ++i) {
    cin >> x;
    ++v[x];
  }
  for (int i = 0; i < M; ++i) {
    cin >> x;
    int t = u[x];
    for (int j = x; j < 201; ++j) {
      u[j] = i;
      if (j != 200 && u[j + 1] != t) break;
    }
  }
  long mx = 0, mn = 1e12, I = 0, J = 0;
  for (int i = 0; i < M; ++i) {
    for (int j = i; j < M; ++j) {
      long t = 0;
      vector<long> w(201);
      for (int k = 1; k < 200; ++k) {
        w[k + 1] = w[k] + min(u[k], i + abs(u[k] - j));
      }
      for(int k = 1; k < 201; ++k) {
        t += (w[min(200, k + K)] - w[k]) * v[k];
      }
      if(mn >= t) {
        mn = t;
        if(i != j) I = i, J = j;
      }
      mx = max(mx, mn);
    }
  }
  cout << I + 1 << " " << J + 1 << "\n" << mx - mn;
}
