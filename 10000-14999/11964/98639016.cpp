// 2025년 9월 18일 13:29:09
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int T, A, B, mx = 0;
  cin >> T >> A >> B;
  vector<int> v(T + 1);
  for (int i = 1; i <= T; ++i) {
    if (!(i % A) || !(i % B)) {
      v[i] = 1;
      mx = i;
    }
  }
  for (int i = T; i > 0; --i) {
    for (int j = T - i / 2; j > 0; --j) {
      if (mx >= i / 2 + j) break;
      if (v[j] == 1) {
        mx = i / 2 + j;
        break;
      }
    }
  }
  cout << mx;
}