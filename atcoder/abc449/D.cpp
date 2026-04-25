#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  long L, R, D, U, c = 0, B = 1'000'000;
  cin >> L >> R >> D >> U;
  for(long i = -B; i <= B; ++i) {
    if (i % 2 || i == 0) continue;
    if (i >= L && i <= R && -abs(i) <= U && abs(i) >= D) {
      c += min(abs(i), U) - max(-abs(i), D) + 1;
    }
    if (i >= D && i <= U && -abs(i) <= R && abs(i) >= L) {
      c += min(abs(i) - 1, R) - max(-abs(i) + 1, L) + 1;
    }
  }
  if(L <= 0 && R >= 0 && D <= 0 && U >= 0) ++c;
  cout << c;
}