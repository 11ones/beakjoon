// 2025년 11월 3일 01:34:00
// 런타임 에러 (DoubleFree)
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int N, c = 0;
  cin >> N;
  vector<int> v(N + 2), tv(N + 2);
  for(int i = 1; i <= N; ++i) {
    cin >> v[i];
  }
  for(int i = 1; i <= N; ++i) {
    if(v[i] != tv[i]) {
      for(int j = 0; j < 3; ++j) {
        tv[i + j] = !tv[i + j];
      }
      ++c;
    }
  }
  cout << c;
}