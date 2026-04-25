// 2024년 10월 24일 00:05:18
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n, m, c = 0, p = 0;
  cin >> n >> m;
  vector<long long> v(n);
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
    c += *b * 2;
    b--;
    p--;
  }
  cout << n - p;
}