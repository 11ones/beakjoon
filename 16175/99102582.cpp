// 2025년 10월 2일 14:56:32
// 맞았습니다!!
// 2020KB
// 4ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int T, N, M, x;
  cin >> T;
  while (T--) {
    cin >> N >> M;
    vector<int> v(N);
    for (int i = 0; i < M; ++i) {
      for (int j = 0; j < N; ++j) {
        cin >> x;
        v[j] += x;
      }
    }
    cout << max_element(v.begin(), v.end()) - v.begin() + 1 << '\n';
  }
}