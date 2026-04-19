// 2025년 9월 21일 21:29:52
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int T, A, B, mx = 0;
  cin >> T >> A >> B;
  vector<int> v(T + 1);
  for (int i = 0; i <= T; i += A) {
    for (int j = 0; i + j <= T; j += B) {
      v[i + j] = 1;
      mx = max(mx, i + j);
    }
  }
  for (int i = T; i > 0; --i) {
    for (int j = T - i / 2; j > 0; --j) {
      if (mx >= i / 2 + j) break;
      if (v[j] == 1) {
        mx = max(mx, i / 2 + j);
        break;
      }
    }
  }
  cout << mx;
}