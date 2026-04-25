// 2025년 5월 20일 19:04:06
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  for(int o = 1; o <= T; ++o) {
    int N;
    cin >> N;
    vector<int> v(N * 2), t;
    for(int &e : v) cin >> e;
    for(int i = 0; i < N * 2; i += 2) {
      t.push_back(v[i]);
      *lower_bound(v.begin(), v.end(), v[i] / 3 * 4) = 0;
      sort(v.begin(),v.end());
    }
    cout << "Case #" << o << ": ";
    for(int e : t) cout << e << " ";
    cout << '\n';
  }
}