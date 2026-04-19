// 2024년 10월 23일 23:34:03
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m, c = 0, p = 0;
  cin >> n >> m;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  auto f = v.begin(), b = v.end() - 1;
  while (f < b) {
    if(c <= m) {
      p++;
      c += *f;
      f++;
    } else {
      c -= *b;
      b--;
    }
  }
  if(c > m) {
    c -= *b;
    b--;
  }
  while (c > m) {
    c += *b;
    b--;
    p--;
  }
  cout << n - p;
}