// 2024년 12월 13일 17:34:04
// 메모리 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, c = 0;
  cin >> n;
  vector<int> v{0};
  for (int i = 1; i <= n; i++) {
    v.push_back(v.back() + i);
  }
  auto f = v.begin();
  auto b = f;
  while (1) {
    if (*b - *f > n) {
      f++;
    }
    if (*b - *f == n) {
      c++;
      f++;
      b++;
    }
    if (*b - *f < n) {
      b++;
    }
    if(b >= v.end()) {
      break;
    }
  }
  cout << c;
}