// 2025년 11월 3일 01:30:22
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int N, c = 0;
  cin >> N;
  vector<int> v(N + 2);
  for(int i = 1; i <= N; ++i) {
    cin >> v[i];
  }
  for(int i = 1; i <= N; ++i) {
    if(v[i - 1]) {
      for(int j = 0; j < 3; ++j) {
        v[i - 1 + j] = !v[i - 1 + j];
      }
      ++c;
    }
  }
  cout << c;
}