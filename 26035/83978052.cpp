// 2024년 9월 17일 15:15:37
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
#define MOD 1'000'000'007
using namespace std;

typedef long long l;
l n, m;
array<l, 60> a{1}, b{2};

l run(l x) {
  if (x == 0) {
    return 1;
  }
  for (int i = 1; i < 60; i++) {
    if (x < a[i]) {
      return b[i - 1] * run(x - a[i - 1]) % MOD;
    }
  }
  return -1;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  for (int i = 1; i < 60; i++) {
    a[i] = a[i - 1] * 2;
    b[i] = b[i - 1] * b[i - 1] % MOD;
  }
  cin >> n >> m;
  cout << (run(n) + run(m) + MOD - 2) % MOD;
}