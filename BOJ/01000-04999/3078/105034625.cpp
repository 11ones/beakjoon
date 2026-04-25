// 2026년 4월 15일 03:43:20
// 맞았습니다!!
// 3200KB
// 36ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  long N, K, c = 0;
  string s;
  cin >> N >> K;
  vector<int> v(N);
  map<int, int> m;
  for (int i = 0; i < N; ++i) {
    cin >> s;
    v[i] = s.size();
    if (i > K) --m[v[i - K - 1]];
    c += m[v[i]];
    ++m[v[i]];
  }
  cout << c;
}