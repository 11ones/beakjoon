// 2025년 5월 23일 01:10:55
// 출력 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;
long n, m;

long tpm(long t, long p) {
  if (p == 0) return 1;
  if (p == 1) return t;
  long x = tpm(t, p / 2);
  x = (x * x) % m;
  if (p % 2) {
    return (x * t) % m;
  }
  return x;
}

int main() {
  cin >> n >> m;
  long t = 1;
  set<int> v;
  for (int i = 1; i <= n / 2; ++i) {
    t = (t * (n - i) % m) * tpm(i, m - 2) % m;
    if (!(t % m)) {
      v.insert(i + 1);
      if (i != n - i - 1) {
        v.insert(n - i - 1);
      }
    }
  }
  cout << v.size() << '\n';
  for (int e : v) cout << e << " ";
}