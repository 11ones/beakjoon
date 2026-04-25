// 2025년 11월 3일 01:25:47
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int N, c = 0, tc = 1;
  cin >> N;
  vector<int> v(N);
  for(int &e : v) cin >> e;
  auto tv = v;
  tv[0] = !tv[0];
  tv[1] = !tv[1];
  for(int i = 1; i < N; ++i) {
    if(v[i - 1]) {
      for(int j = 0; j < 3; ++j) {
        v[i - 1 + j] = !v[i - 1 + j];
      }
      ++c;
    }
    if(tv[i - 1]) {
      for(int j = 0; j < 3; ++j) {
        tv[i - 1 + j] = !tv[i - 1 + j];
      }
      ++tc;
    }
  }
  cout << min(c, tc);
}