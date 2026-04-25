// 2024년 11월 10일 12:34:26
// 맞았습니다!!
// 6120KB
// 224ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, t;
  cin >> n >> t;
  vector<int> v(1 << n);
  for (int i = 0; i < (1 << n); i++) {
    cin >> v[i];
  }
  if (t % 2) {
    for (int i = (1 << n) - 1; i >= 0; i--) {
      cout << v[i] << ' ';
    }
  } else {
    for (auto e : v) {
      cout << e << ' ';
    }
  }
}