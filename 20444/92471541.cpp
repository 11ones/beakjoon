// 2025년 4월 2일 20:54:40
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

bool l(long &n, long &k, long f, long b) {
  if (f + 1 >= b) {
    if ((n - f + 1) * (f + 1) == k) {
      return 1;
    }
    return 0;
  }
  long m = (f + b) / 2;
  if((n - m + 1) * (m + 1) < k) {
    return l(n, k, f, m);
  }
  return l(n, k, m, b);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  long n, k;
  cin >> n >> k;
  cout << (l(n, k, (n + 1) / 2, n + 1) ? "YES" : "NO");
}